package SimpleCossacksServer::CommandController::Open;
use Mouse;
use Coro::LWP;
use LWP;
use JSON;
use AnyEvent::IO;
use String::Escape();
use URI();
use URI::QueryParam();
use feature 'state';

my @PUBLIC = qw[
  enter try_enter startup resize games rooms_table_dgl new_room_dgl reg_new_room
  join_game join_pl_cmd user_details users_list direct direct_ping 
  direct_join room_info_dgl started_room_message
  tournaments lcn_registration_dgl gg_cup_thanks_dgl
];


my %PUBLIC = map { $_ => 1 } @PUBLIC;
sub public {
  my($self, $method) = @_;
  return $PUBLIC{$method};
}

sub enter {
  my($self, $h, $p) = @_;
  if($h->connection->data->{account}) {
    my $type = $h->connection->data->{account}{type}; 
    my $nick = $h->connection->data->{account}{login};
    my $id = $h->connection->data->{account}{id};
    $h->show('enter.cml', { type => $type, nick => $nick, id => $id, logged_in => 1 });
  } else {
    my $type = $p->{TYPE} if $p->{TYPE} && ($p->{TYPE} eq 'LCN' || $p->{TYPE} eq 'WCL');
    $h->show('enter.cml', { type => $type });
  }
}

my $ua = LWP::UserAgent->new(agent => 'cossacks-server bot');
sub try_enter {
  my($self, $h, $p) = @_;
  my $nick = $p->{NICK};
  my $type = $p->{TYPE} // '';
  $h->connection->data->{dev} = ($nick =~ s/#dev4231$//);
  if($p->{RESET}) {
    my $account_data = $h->connection->data->{account};
    $h->log->info(
      $h->connection->log_message . " " . $h->req->ver . " #logout from " . lc($account_data->{type}) . " account "
      . String::Escape::printable("$account_data->{id} $account_data->{login}")
    );
    $h->connection->data->{account} = undef;
    $h->show('enter.cml');
  } elsif($p->{LOGGED_IN}) {
    if($h->connection->data->{account}) {
      $nick = $h->connection->data->{account}{login};
      $nick =~ s/[^\[\]\w-]+//g;
      $h->server->post_account_action($h, 'enter');
      $self->_success_enter($h, $p, $nick);
    } else {
      $h->show('enter.cml');
    }
  } elsif($type eq 'LCN' || $type eq 'WCL') {
    my $host = $h->server->config->{lc($type) . "_host"};
    my $server_name = $h->server->config->{lc($type) . "_server_name"} // $host;
    my $key = $type eq 'LCN' ? $h->server->config->{lcn_key} : $h->server->config->{wcl_key};
    my $password = $p->{PASSWORD};
    if(!defined($nick) || $nick eq '') {
      $h->show('enter.cml', { error => 'enter nick', type => $type });
    } elsif(!defined($nick) || $nick eq '') {
      $h->show('enter.cml', { error => 'enter password', type => $type });
    } else {
      my $url = "http://$host/api/server.php";
      my $response = $ua->post($url, { 
        action => 'logon',
        key => $key,
        login => $nick,
        password => $password,
      }, X_Client_IP => $h->connection->ip ); 

      unless($response->is_success) {
        $h->log->error("bad response from $url : " . $response->status_line);
        $h->show('enter.cml', { error => "problem with $server_name server", type => $type });
        return;
      }

      my $result = eval { JSON::from_json($response->decoded_content) } or do {
        $h->log->error("bad json from $url");
        $h->show('enter.cml', { error => "problem with $server_name server", type => $type });
        return;
      };

      unless($result->{success}) {
        $h->show('enter.cml', { error => 'incorrect login or password', type => $type });
        $h->log->info($h->connection->log_message . " " . $h->req->ver . " #authenticate unsuccessfull with " . lc($type) . " login " . String::Escape::printable($nick));
      } else {
        my $account_data = {
          login => $nick,
          id => $result->{id},
          type => $type,
        };
        $account_data->{profile} = $result->{profile} if defined $result->{profile} && $result->{profile} =~ m{^https?://};
        if($type eq 'LCN') {
          my $url = URI->new("http://" . $h->server->config->{lcn_host} . "/lang_redir.php");
          $url->query_param(path => 'player.php?plid=' . $account_data->{id});
          $account_data->{profile} = "$url";
        }
        $h->connection->data->{account} = $account_data;
        $nick =~ s/[^\[\]\w-]+//g;
        $nick =~ s/^(?=\d)/_/;
        $h->log->info(
          $h->connection->log_message . " " . $h->req->ver . " #authenticate successfull with " . lc($type)
          . " account " . String::Escape::printable("$account_data->{id} $account_data->{login}")
        );
        $self->_success_enter($h, $p, $nick);
      }
    }
  } else {
    if(!defined($nick) || $nick eq '') {
      $h->show('error_enter.cml', { error_text => 'Enter nick' });
    } elsif($nick !~ /^[\[\]_\w-]+$/) {
      $h->show('error_enter.cml', { error_text => 'Bad character in nick. Nick can contain only a-z,A-Z,0-9,[]_-' });
    } elsif($nick =~ /^([0-9-])/) {
      $h->show('error_enter.cml', { error_text => "Bad character in nick. Nick can't start with " . ($1 eq '-' ? '-' : 'numerical digit') });
    } else {
      $nick = substr($nick, 0, 25) if length($nick) > 25;
      $self->_success_enter($h, $p, $nick);
    }
  }
}

sub _success_enter {
  my($self, $h, $p, $nick) = @_;
  my $g = $h->server->data;
  my $id;
  unless($h->connection->data->{id}) {
    $id = ++$g->{last_player_id};
    $h->connection->data->{id} = $id;
    $h->connection->connection_by_pid($id => $h->connection);
  } else {
    $id = $h->connection->data->{id};
    $h->server->leave_room( $id );
  }
  $h->connection->data->{nick} = $nick;
  my $account_data = $h->connection->data->{account};
  $h->log->info(
    $h->connection->log_message . " " . $h->req->ver . " #enter" 
    . ( $account_data ?
      " with " . lc($account_data->{type}) . " account " . String::Escape::printable("$account_data->{id} $account_data->{login}")
      : ""
    )
  );
  $g->{players}{$id}{nick} = $nick;
  $g->{players}{$id}{account} = $account_data;
  $g->{players}{$id}{connected_at} = $h->connection->ctime;
  $g->{players}{$id}{id} = $id;
  $g->{players}{$id}{account} = $h->connection->data->{account};
  my $height = $p->{HEIGHT} =~ /^\d+$/ ? $p->{HEIGHT} : $h->connection->data->{height};
  $h->connection->data->{height} = $height;
  my $size = $height && $height > int(314 + (419 - 314)/2) ? 'large' : 'small';
  $h->show('ok_enter.cml', { nick => $nick, id => $id, window_size => $size });
}

sub startup {
  my($self, $h, $p) = @_;
  my $size = $h->connection->data->{height} && $h->connection->data->{height} > int(314 + (419 - 314)/2) ? 'large' : 'small';
  my $gg_cup = $h->server->load_gg_cup();
  $h->show('startup.cml', { window_size => $size, gg_cup => $gg_cup });
}

sub resize {
  my($self, $h, $p) = @_;
  my $height = $p->{height};
  $h->connection->data->{height} = $height;
  my $size = $height > int(314 + (419 - 314)/2) ? 'large' : 'small';
  if($size eq 'large') {
    $h->push_command(LW_show => "<RESIZE>\n#large\n<RESIZE>");
  } else {
    $h->push_command(LW_show => "<RESIZE>\n<RESIZE>");
  }
}

sub games {
  my $self = shift;
  $self->startup(@_);
}

sub new_room_dgl {
  my($self, $h, $p) = @_;
  if(!$p->{ASTATE}) {
    $self->_error($h, "You can not create or join room!\nYou are already participate in some room\nPlease disconnect from that room first to create a new one");
  } else {
    $h->show('new_room_dgl.cml');
  }
}

sub reg_new_room {
  my($self, $h, $p) = @_;
  if(!$p->{ASTATE}) {
    $self->_error($h, "You can not create or join room!\nYou are already participate in some room\nPlease disconnect from that room first to create a new one");
  } elsif($p->{VE_TITLE} eq '' || $p->{VE_TITLE} =~ /[\x00-\x1F\x7F]/ || $p->{VE_TITLE} =~ /^\s*$/) {
    $h->show('confirm_dgl.cml', {
      header  => "Error",
      text    => "Illegal title!\nPress Edit button to check title",
      ok_text => "Edit",
      command => "GW|open&new_room_dgl.dcml&ASTATE=<%ASTATE>",
    });
  } elsif(!$h->connection->data->{id} || !$h->connection->data->{nick}) {
    $self->_error($h, "Your was disconnected from the server. Enter again.");
  } else {
    my $player_id = $h->connection->data->{id};
    $h->server->leave_room( $player_id );
    my $rooms = ( $h->server->data->{dbtbl}{ "ROOMS_V" . $h->req->ver } //= [] );
    $h->server->data->{last_room} ||= 1;
    my $room_id = ++$h->server->data->{last_room};
    my $level = $p->{VE_LEVEL} == 3 ? 'Hard' : $p->{VE_LEVEL} == 2 ? 'Normal' : $p->{VE_LEVEL} == 1 ? 'Easy' : 'For all';
    my $title = $p->{VE_TITLE};
    $title = substr($title, 0, 60) if length($title) > 60;
    s/^\s+//, s/\s+$// for $title;
    my $row = [ $room_id, (length $p->{VE_PASSWD} ? '#' : ''), $title, $h->connection->data->{nick}, ($h->is_american_conquest ? $p->{VE_TYPE} : ()), $level, "1/".($p->{VE_MAX_PL}+2), $h->req->ver, $h->connection->int_ip, sprintf("0%X", 0xFFFFFFFF - $room_id) ];
    my $ctlsum = $h->server->_room_control_sum($row);
    my $room = {
      row            => $row,
      id             => $room_id,
      title          => $title,
      password       => $p->{VE_PASSWD} // '',
      host_id        => $player_id,
      host_addr      => $h->connection->ip,
      host_addr_int  => $h->connection->int_ip,
      players_count  => 1,
      players        => { $player_id => { %{$h->server->data->{players}->{$player_id}} } },
      players_time   => { $player_id => time },
      max_players    => $p->{VE_MAX_PL} + 2,
      ver            => $h->req->ver,
      level          => int($p->{VE_LEVEL}),
      ctime          => time,
      ctlsum         => $ctlsum,
    };
    push @$rooms, $room;
    $h->server->data->{rooms_by_ctlsum}->{ $room->{ctlsum} }  = $room;
    $h->server->data->{rooms_by_player}->{ $room->{host_id} } = $room;
    $h->server->data->{rooms_by_id}->{ $room->{id} }          = $room;
    $h->server->data->{alive_timers}{ $player_id } = AnyEvent->timer( after => 150, cb => sub {
      $h->server->command_controller($h)->not_alive($h, $player_id);
    } );
    $h->log->info($h->connection->log_message . " " . $h->req->ver . " #create room $room->{id} $room->{title}" );
    $h->show('reg_new_room.cml', { id => ($p->{VE_TYPE} ? "HB" : "") . $room_id, name => $room->{title}, max_pl => $room->{max_players} });
  }
}

sub room_info_dgl {
  my($self, $h, $p) = @_;
  if($p->{VE_RID} !~ /^\d+$/) {
    $h->push_command( LW_show => "<NGDLG>\n<NGDLG>");
    return;
  }
  my $room = $h->server->data->{rooms_by_id}{ $p->{VE_RID} };
  unless($room) {
    $self->_error($h, "The room is closed");
    return;
  }
  my $backto;
  if($p->{BACKTO} && $p->{BACKTO} eq 'user_details') {
    $backto = 'open&user_details.dcml&ID=' . $h->connection->data->{id}; 
  }
  if($room->{started} && ($h->connection->data->{dev} || $h->server->config->{show_started_room_info})) {
    state $nations = [qw<
      Bavaria
      Denmark
      Austria
      England
      France
      Netherlands
      Piemonte
      Portugal
      Prussia
      Russia
      Poland
      Saxony
      Spain
      Sweden
      Ukraine
      Venice
      Algeria
      Turkey
      Hungary
      Switzerland
      (Random)
    >];
    my $tpl = $p->{part} && $p->{part} eq 'statcols' ? 'started_room_info/statcols.cml' : 'started_room_info.cml';
    $h->show($tpl, {
      room => $room,
      room_time => $self->_time_interval($room->{started} || $room->{ctime}),
      backto => $backto,
      page => ($p->{page} || 1),
      res => ($p->{res} && $p->{res} =~ /^\d+$/ ? $p->{res} : 0),
      nations => $nations,
    });
  } else {
    $h->show('room_info_dgl.cml', { room => $room, room_time => $self->_time_interval($room->{started} || $room->{ctime}), backto => $backto });
  }
}

sub _time_interval {
    my($self, $ctime) = @_;
    my $time = time - $ctime;
    my @tm;

    my $d = int($time / 86400);
    $time %= 86400;
    push @tm, "${d}d" if $d;

    my $h = int($time / 3600);
    $time %= 3600;
    push @tm, "${h}h" if $h;
    return join " ", @tm if $d;

    my $m = int($time / 60);
    $time %= 60;
    push @tm, "${m}m" if $m;
    return join " ", @tm if $h || $m >= 10;

    my $s = $time;
    push @tm, "${s}s" if $s;
    return @tm ? join(" ", @tm) : "0s";
}

sub join_game {
  my($self, $h, $p) = @_;
  if($p->{VE_RID} !~ /^\d+$/) {
    $h->push_command( LW_show => "<NGDLG>\n<NGDLG>");
    return;
  }
  my $room = $h->server->data->{rooms_by_id}{ $p->{VE_RID} };
  $self->_join_to_room($h, $room, $p->{ASTATE}, $p->{VE_PASSWD} // '');
}

sub _join_to_room {
  my($self, $h, $room, $astate, $password) = @_;
  if(!$h->connection->data->{id} || !$h->connection->data->{nick}) {
    $self->_error($h, "Your was disconnected from the server. Enter again.");
    return;
  }
  if(!$astate) {
    $self->_error($h, "You can not create or join room!\nYou are already participate in some room\nPlease disconnect from that room first to create a new one");
    return;
  }
  if(!$room) {
    $self->_error($h, "You can not join this room!\nThe room is closed");
    return;
  }
  if($room->{started}) {
    $self->_error($h, "You can not join this room!\nThe game has already started");
    return;
  }
  if($room->{players_count} >= $room->{max_players}) {
    $self->_error($h, "You can not join this room!\nThe room is full");
    return;
  }
  if($room->{password} ne '' && $password ne $room->{password}) {
    $h->show('confirm_password_dgl.cml', { id => $room->{id} });
    return;
  }
  my $player_id = $h->connection->data->{id};
  $h->server->leave_room( $player_id );
  $h->server->data->{rooms_by_player}{ $player_id } = $room;
  delete $h->server->data->{rooms_by_ctlsum}->{ $room->{ctlsum} };
  $room->{players}{ $player_id } = { %{$h->server->data->{players}->{ $player_id }} };
  $room->{players_time}{ $player_id } = time;
  $room->{players_count}++;
  $room->{row}[-4] = $room->{players_count} . "/" . $room->{max_players};
  $room->{ctlsum} = $h->server->_room_control_sum($room->{row});
  $h->server->data->{rooms_by_ctlsum}->{ $room->{ctlsum} } = $room;
  my $connection = $h->connection;
  $h->show('join_room.cml' => { id => $room->{id}, max_pl => $room->{max_players}, name => $room->{title}, ip => $room->{host_addr} });
  $h->log->info($h->connection->log_message . " " . $h->req->ver . " #join room $room->{id} $room->{title}" );
}

sub user_details {
  my($self, $h, $p) = @_;
  my($id) = ($p->{ID} =~ /(\d+)/);
  if(my $player = $h->server->data->{players}{$id}) {
    $h->show('user_details.cml', {
      player => $player,
      connection_time => $self->_time_interval($player->{connected_at}),
      room => $h->server->data->{rooms_by_player}{ $id },
    }); 
  } else {
    $h->log->warn("There is no info about player $id");
  }
}

sub join_pl_cmd {
  my($self, $h, $p) = @_;
  $h->push_empty, return if $h->connection->data->{id} && $h->server->data->{rooms_by_player}{ $h->connection->data->{id} };
  my $room = $h->server->data->{rooms_by_player}{ $p->{VE_PLAYER} };
  if(!$room) {
    return;
  } elsif($room->{started}) {
     $self->_error($h, "Game alredy started"); 
    return;
  } else {
    $self->room_info_dgl($h, { VE_RID => $room->{id} });
    return;
  }
}

sub tournaments {
  my($self, $h, $p) = @_;
  my $option = $p->{option} // 'total';
  my $rating = $h->server->load_lcn_ranking();
  if(!$rating) {
    $self->_error($h, 'Internal server error');
    return;
  } else {
    $h->show('lcn_rating.cml', {
      options => $rating->{options},
      options_labels => $rating->{labels},
      current_option => $option,
      rating => $rating->{ranking}{$option},
    });
  }
}

sub lcn_registration_dgl {
  my($self, $h, $p) = @_;
  $h->show('confirm_dgl.cml', {
    header  => "LCN Registration",
    text    => "Open 127.0.0.1?",
    ok_text => "Ok",
    command => "GW|url&http://" . $h->server->config->{lcn_host} . "/lang_redir.php&from=tournaments",
    height  => 100,
  });
}

sub gg_cup_thanks_dgl {
  my($self, $h, $p) = @_;
  my $gg_cup = $h->server->load_gg_cup();
  $h->show('gg_cup_thanks_dgl.cml', { supporters => $gg_cup->{supporters} });
}

sub users_list {
  my($self, $h, $p) = @_;
  $self->_error($h, "Not imlemented");
}

sub _default {
  my($self, $h, $p) = @_;
  $self->_error($h, "Page Not Found");
}

sub _alert {
  my($self, $h, $header, $text) = @_;
  $h->show('alert_dgl.cml', { text => $text, header => $header });
}

sub _error {
  my($self, $h, $text) = @_;
  $h->show('alert_dgl.cml', { text => $text, header => 'Error' })
}

__PACKAGE__->meta->make_immutable();
