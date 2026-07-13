package SimpleCossacksServer;
our $VERSION = '0.01';
use Mouse;
use SimpleCossacksServer::CommandController;
use SimpleCossacksServer::ConnectionController;
use SimpleCossacksServer::Handler;
use SimpleCossacksServer::Connection;
use feature 'state';
use Template;
use Config::Simple;
use POSIX();
use JSON();
use AnyEvent::HTTP();
use AnyEvent::IO;
extends 'GSC::Server';
has template_engine => (is => 'rw');
has config_file => (is => 'ro');
has connection_controller => (is => 'ro', default => sub { SimpleCossacksServer::ConnectionController->new() });
has log_level => (is => 'rw');
has config => (is => 'rw', builder => '_build_config');
has host => (is => 'ro', default => sub { shift->config->{host} // 'localhost' });
has port => (is => 'ro', default => sub { shift->config->{port} // 34001 });
has log_access_ctx => (is => 'rw', builder => '_build_log_access_ctx');
has log_error_ctx => (is => 'rw', builder => '_build_log_error_ctx');
has _export_rooms_timer => (is => 'rw');

sub command_controller { 'SimpleCossacksServer::CommandController' }
sub handler_class { 'SimpleCossacksServer::Handler' }
sub connection_class { 'SimpleCossacksServer::Connection' }

sub init {
  my($self) = @_;

  $self->data->{last_player_id} = 0;
  $self->data->{dbtbl} = {};
  $self->data->{rooms_by_ctlsum} = {};
  $self->data->{rooms_by_player} = {};
  $self->template_engine( Template->new(
    INCLUDE_PATH => $self->config->{templates},
    CACHE_SIZE   => 64,
    START_TAG    => '<\?',
    END_TAG      => '\?>',
    PLUGINS => {
        CMDFilter => 'SimpleCossacksServer::Template::Plugin::CMDFilter',
        CMLStringArgFilter => 'SimpleCossacksServer::Template::Plugin::CMLStringArgFilter',
    },
  ) );

  # AnyEvent::Log
  $AnyEvent::Log::LOG->log_cb(sub { print STDERR shift; 0 });

  $self->load_lcn_ranking();
}

sub _build_log_error_ctx {
  my($self) = @_;
  if($self->config->{error_log}) {
    my $errorCtx = AnyEvent::Log::Ctx->new(
      level => "warn",
      log_to_file => $self->config->{error_log},
    );
    $AnyEvent::Log::COLLECT->attach($errorCtx);
    return $errorCtx;
  } else {
    return undef;
  }
}

sub _build_log_access_ctx {
  my($self) = @_;
  my $ctx = AnyEvent::Log::ctx($self->meta->name);
  if($self->config->{access_log}) {
    my $infoCtx = AnyEvent::Log::Ctx->new(
      levels => "info",
      log_to_file => $self->config->{access_log},
    );
    $infoCtx->fmt_cb(sub {
      my($time, $ctx, $level, $message) = @_;
      return "[" . POSIX::strftime("%Y-%m-%d/%H:%M:%S", localtime $time) . sprintf(".%03d", ($time - int $time)*1000 ) . "] " . $message . "\n";
    });
    $ctx->attach($infoCtx);
    return $infoCtx;
  } else {
    return undef;
  }
}

sub start {
  my $self = shift;
  local $ENV{TZ} = 'UTC';
  $self->data->{start_at} = POSIX::strftime "%Y-%m-%d %H:%M %Z", localtime time;
  if($self->config->{export_rooms_time} && $self->config->{export_rooms_file}) {
    my $w = AE::timer $self->config->{export_rooms_time}, $self->config->{export_rooms_time}, sub {$self->export_rooms() };
    $self->_export_rooms_timer($w);
  }
  $self->SUPER::start(@_);
}

sub reload {
  my $self = shift;
  $self->log->notice('reset server');

  $self->reload_config;
  if($self->data->{start_at} && $self->config->{export_rooms_time} && $self->config->{export_rooms_file}) {
    my $w = AE::timer $self->config->{export_rooms_time}, $self->config->{export_rooms_time}, sub { $self->export_rooms() };
    $self->_export_rooms_timer($w);
  }

  if($self->config->{access_log}) {
    if($self->log_access_ctx) {
      $self->log_access_ctx->log_to_file( $self->config->{access_log} );
    } else {
      $self->log_access_ctx( $self->_build_log_access_ctx );
    }
  } else {
    if($self->log_access_ctx) {
      AnyEvent::Log::ctx($self->meta->name)->detach($self->log_access_ctx);
      $self->log_access_ctx(undef);
    }
  }

  if($self->config->{error_log}) {
    if($self->log_error_ctx) {
      $self->log_error_ctx->log_to_file( $self->config->{error_log} );
    } else {
      $self->log_error_ctx( $self->_build_log_error_ctx );
    }
  } else {
    if($self->log_error_ctx) {
      $AnyEvent::Log::COLLECT->detach($self->log_error_ctx);
      $self->log_error_ctx(undef);
    }
  }
}

sub _build_config {
  my($self) = @_;
  my $config = {};
  my $cfg = Config::Simple->new($self->config_file) or die Config::Simple->error();
  $config = $cfg->vars();
  for my $key (keys %$config) {
    $config->{$1} = delete $config->{$key} if $key =~ /^default\.(.*)/;
  }
  $config->{table_timeout} //= 10000;
  return $config;
}

sub reload_config {
  my($self) = @_;
  my $config = {};
  my $cfg = Config::Simple->new($self->config_file) or $self->log->error( Config::Simple->error() );
  $config = $cfg->vars();
  for my $key (keys %$config) {
    $config->{$1} = delete $config->{$key} if $key =~ /^default\.(.*)/;
  }
  @$config{'port', 'host'} = @{$self->config}{'host', 'port'};
  $config->{table_timeout} //= 10000;
  $self->config($config);
}

sub _room_control_sum {
  my($self, $row) = @_;
  $row = join "", @$row if ref($row) eq 'ARRAY';
  my $V1 = 1;
  my $V2 = 0;
  for(my $i = 0; $i < (length($row) + 5552 - 1); $i += 5552) {
    for(my $j = $i; $j < ($i + 5552) and $j < length($row); $j++) {
      my $c = ord(substr($row, $j, 1));
      $V1 += $c;
      $V2 += $V1;
    }
    $V1 %= 0xFFF1;
    $V2 %= 0xFFF1;
  }
  my $r = ($V2 << 0x10) | $V1;
  return $r;
}

sub leave_room {
  my($self, $player_id) = @_;
  my $room = $self->data->{rooms_by_player}{$player_id} or return;
  
  delete $self->data->{rooms_by_player}{ $player_id };
  $room->{players_count}--;
  if(!$room->{started}) {
    delete $room->{players}{ $player_id };
    delete $room->{players_time}{ $player_id };
    $room->{row}[-4] = $room->{players_count} . "/" . $room->{max_players};
  } else {
    $room->{players}{ $player_id }{exited} = time;
  }
  my $in_ctrl_sum = delete $self->data->{rooms_by_ctlsum}->{ $room->{ctlsum} };
  $room->{ctlsum} = $self->_room_control_sum($room->{row});

  if($room->{started} ? $room->{players_count} <= 0 : $room->{host_id} == $player_id) {
    delete $self->data->{rooms_by_id}{ $room->{id} };
    my $rooms_list = $self->data->{dbtbl}{ "ROOMS_V" . $room->{ver} };
    for(my $i = 0; $i < @$rooms_list; $i++) {
      if($rooms_list->[$i]{id} == $room->{id}) {
        splice @$rooms_list, $i, 1;
        last;
      } 
    }
  } else {
    $self->data->{rooms_by_ctlsum}->{ $room->{ctlsum} } = $room if $in_ctrl_sum;
  }
  return $room;
}

sub start_room {
  my($self, $player_id, $params) = @_;
  my $room = $self->data->{rooms_by_player}{$player_id} or return;
  
  if($room->{host_id} == $player_id) {
    delete $self->data->{rooms_by_ctlsum}{ $room->{ctlsum} };
    %$room = (%$room, %$params) if $params;
    $room->{row}[1] = "\x{7F}0018";
    substr($room->{row}[-1], 0, 1) = '1';
    $room->{started} = time;
    $room->{start_players_count} = $room->{players_count};
    $room->{ctlsum} = $self->_room_control_sum($room->{row});
    $self->data->{rooms_by_ctlsum}->{ $room->{ctlsum} } = $room;
  }
  return $room;
}

sub post_account_action {
  my($self, $h, $action, $data, $time) = @_;
  $h->log->error('no $action') and return unless $action;
  if(my $account_data = $h->connection->data->{account}) {
    my $host = $h->server->config->{lc($account_data->{type}) . "_host"};
    my %params;
    $params{time} = $time // time; 
    $params{action} = $action;
    $params{data} = $data if defined $data;
    $params{key} = $h->server->config->{lc($account_data->{type}) . "_key"};
    $params{account_id} = $account_data->{id};
    my $body = '';
    my $i;
    for my $name (keys %params) {
      $body .= ($i ? "&" : "" ) . "$name=" . ( ref($params{$name}) ? JSON::to_json($params{$name}) : $params{$name} );
      $i++
    }
    my $url = "http://$host/api/server.php";
    AnyEvent::HTTP::http_post $url, $body,
      headers => {
        "Content-Type" => "application/x-www-form-urlencoded",
        "Content-Length" => length($body),
        "UserAgent" => "cossacks-server bot",
        "X-Client-IP" => $h->connection->ip,
      },
      sub {
        my($data, $headers) = @_;
        unless($headers->{Status} >= 200 && $headers->{Status} < 300) {
          $h->log->warn("bad response from $url : " . $headers->{Status} . " " . $headers->{Reason});
        } 
      }
    ;
  }
}

sub export_rooms {
  my($self) = @_;
  my $rooms = $self->data->{dbtbl}{ROOMS_V2} || [];
  my $rms = [];
  $self->log->debug("exporting " . scalar(@$rooms) . " rooms");
  for my $room (@$rooms) {
    my $r = {};
    state $copy = [qw<id title ctime level max_players host_id>];
    @{$r}{@$copy} = @{$room}{@$copy};
    $r->{password} = JSON::true if $room->{password} ne '';
    if($room->{started}) {
      $r->{started_at} = $room->{started}+0;
      $r->{ai} = $room->{ai} ? JSON::true : JSON::false;
      $r->{map} = $room->{map};
      $r->{time} = $room->{time}+0;
    }
    $r->{players} = [];
    my $players = $room->{started_players} // [sort { $room->{players_time}{$a->{id}} <=> $room->{players_time}{$b->{id}} } values %{$room->{players}}];
    for my $player (@$players) {
      my $p = {};
      state $copy = [qw<id nick connected_at>];
      @{$p}{@$copy} = @{$player}{@$copy};
      $p->{joined_at} = $room->{players_time}{$p->{id}};
      for(qw<color nation theam>) {
        $p->{$_} = $player->{$_}+0 if exists $player->{$_};
      }
      $p->{exited_at} = $player->{exited}+0 if exists $player->{exited};
      $p->{$_} = $p->{$_}+0 for qw<id connected_at>;
      push @{$r->{players}}, $p;
    }
    $r->{$_} = $r->{$_}+0 for qw<id ctime level max_players host_id>;
    push @$rms, $r;
  }
  my $json = JSON::to_json({ rooms => $rms });
  aio_open $self->config->{export_rooms_file}, Fcntl::O_CREAT|Fcntl::O_TRUNC|Fcntl::O_WRONLY, 0644, sub {
    my($fh) = @_;
    unless($fh) {
      $self->log->warn("can't open file export_rooms_file $self->config->{export_rooms_file} for write: $!");
      return;
    }
    aio_write $fh, $json, sub {
      my($length) = @_;
      if(!defined $length) {
        $self->log->warn("can't write data to export_rooms_file $self->config->{export_rooms_file}: $!");
      } elsif($length < length($json)) {
        $self->log->warn("not full write to export_rooms_file, $length written, " . length($json) . " expected");
      }
    };
  };
}

sub load_lcn_ranking {
  my($self) = @_;
  my $ranking_file = $self->config->{lcn_ranking} or return;
  my $mtime = (stat $ranking_file)[9] // 0;
  if(!$self->data->{lcn_ranking_mtime} || $self->data->{lcn_ranking_mtime} != $mtime) {
    my $cv = AE::cv;
    aio_load $ranking_file, $cv;
    my $data = $cv->recv();
    unless(defined $data) {
      $self->log->error("can't load LCN ranking file $ranking_file: $!");
      return;
    }
    my $rating = eval { JSON::from_json($data) };
    unless($rating) {
      $self->log->error("can't parse json file $ranking_file: $@");
      return;
    };
    my $places = {};
    for my $row (@{$rating->{ranking}{total}}) {
      $places->{$row->{id}} = $row->{place};
    }
    $self->data->{lcn_place_by_id} = $places;
    $self->data->{lcn_ranking} = $rating;
    $self->data->{lcn_ranking_mtime} = $mtime;
  }
  return $self->data->{lcn_ranking};
}

sub load_gg_cup {
  my($self) = @_;
  my $gg_cup_file = $self->config->{gg_cup_file} or return;
  my $mtime = (stat $gg_cup_file)[9] // 0;
  if(!$self->data->{gg_cup_mtime} || $self->data->{gg_cup_mtime} != $mtime) {
    my $cv = AE::cv;
    aio_load $gg_cup_file, $cv;
    my $data = $cv->recv();
    unless(defined $data) {
      $self->log->error("can't load GG Cup file $gg_cup_file: $!");
      return $self->data->{gg_cup} = { wo_info => 1 };
    }
    unless($data) {
      return $self->data->{gg_cup} = { wo_info => 1 };
    }
    my $gg_cup = eval { JSON::from_json($data) };
    unless($gg_cup) {
      $self->log->error("can't parse json file $gg_cup_file: $@");
      return $self->data->{gg_cup} = { wo_info => 1 };
    }
    $self->data->{gg_cup} = $gg_cup;
  }
  return $self->data->{gg_cup};
}

__PACKAGE__->meta->make_immutable();

=head1 NAME

SimpleCossacksServer - простой сервер для игры в Казаки и ЗА
