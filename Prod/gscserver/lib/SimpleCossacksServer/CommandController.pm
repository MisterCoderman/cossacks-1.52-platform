package SimpleCossacksServer::CommandController;
use Mouse;
BEGIN { extends 'GSC::Server::CommandController' }
use SimpleCossacksServer::CommandController::Open;
use String::Escape();
use JSON();
use Time::HiRes();
use feature 'state';

sub proxy : Command {
  my($self, $h, $ip, $port, $key) = @_;
  my $valid_key = $h->server->config->{proxy_key};
  if(!$valid_key) {
    $h->log->error("reject connection from from proxy " . $h->connection->ip . ": proxy connection disabled");
    $h->log->info($h->connection->log_message . " #reject connection from from proxy: proxy connection disabled");
    $h->close(); return;
  }
  if($key ne $valid_key) {
    $h->log->error("reject connection from from proxy " . $h->connection->ip . ": invalid key $key");
    $h->log->info($h->connection->log_message . " #reject connection from from proxy: invalid key $key");
    $h->close(); return;
  }
  if(!$ip || $ip !~ /^\d+\.\d+\.\d+\.\d+$/) {
    $h->log->error("reject connection from from proxy " . $h->connection->ip . ": pass invalid ip $ip");
    $h->log->info($h->connection->log_message . " #reject connection from from proxy: pass invalid ip $ip");
    $h->close(); return;
  }
  if(!$port || $port !~ /^\d+$/ || !($port > 0 && $port < 0xFFFF)) {
    $h->log->error("reject connection from from proxy " . $h->connection->ip . ": pass invalid port $port");
    $h->log->info($h->connection->log_message . " #reject connection from from proxy: pass invalid port $port");
    $h->close(); return;
  }
  my $proxy_ip = $h->connection->ip;
  $h->connection->ip($ip);
  $h->connection->int_ip(unpack 'L', Socket::inet_aton $ip);
  $h->connection->port($port);
  $h->log->info($h->connection->log_message . " #connect from proxy $proxy_ip");
}

sub login : Command {
  my($self, $h, $lgdta) = @_;
  $h->push_command( LW_show => ':GW|open&enter.dcml');
}

sub open : Command {
  my($self, $h, $url, $params) = @_;
  s/\s+//, s/\0$// for $url;
  my %P;
  if($params) {
    $params =~ s/\0//;
    %P = ( $params =~ m{\G(\w+)=(.*?)(?:\^(?=\w+=)|$)}gs );
  }
  my $method = ( $url =~ s/\.dcml//r );
  if(SimpleCossacksServer::CommandController::Open->public($method)) {
    SimpleCossacksServer::CommandController::Open->$method($h, \%P);
  } else {
    $h->log->warn("open $url" . ($params ? " $params" : "") .  " not found");
    SimpleCossacksServer::CommandController::Open->_default($h, \%P);
  }
}

sub go : Command {
  my($self, $h, $method, @params) = @_;
  my %result_params;
  while(@params) {
    my $param = shift @params;
    if($param =~ s/^(\w+)=//) {
      $result_params{$1} = $param;
    } elsif($param =~ /^(\w+):=$/) {
      $result_params{$1} = shift @params;
    }
  }
  if(SimpleCossacksServer::CommandController::Open->public($method)) {
    SimpleCossacksServer::CommandController::Open->$method($h, \%result_params);
  } else {
    $h->log->warn("go $method" . (join " ", @params) .  " not found");
    SimpleCossacksServer::CommandController::Open->_default($h, \%result_params);
  }
}

sub echo : Command {
  my($self, $h, @args) = @_;
  $h->push_command( LW_echo => @args );
}

sub GETTBL : Command {
  my($self, $h, $name, $num, $rows_pack) = @_;
  s/\0$// for $name, $num;
  my @rows_ctl_sum = unpack 'L*', $rows_pack;
  my %rows_ctl_sum = map { $_ => 1 } @rows_ctl_sum;
  my(@dtbl, @tbl);
  my $rooms = $h->server->data->{dbtbl}{$name};
  my $rooms_by_ctlsum = $h->server->data->{rooms_by_ctlsum};
  my $hide_started = !$h->connection->data->{dev} && !$h->server->config->{show_started_rooms};
  for my $sum (@rows_ctl_sum) {
    push @dtbl, $sum if !$rooms_by_ctlsum->{$sum} || $hide_started && $rooms_by_ctlsum->{$sum}->{started};
  }
  $rooms = [grep {!$_->{started}} @$rooms] if $hide_started;
  for my $room (@$rooms) {
    unless($rows_ctl_sum{ $room->{ctlsum} }) {
      push @tbl, $room->{row};
    }
  }
  $h->push_command( LW_dtbl => map{"$_\0"} $name, pack 'L*', @dtbl);
  $h->push_command( LW_tbl => map{"$_\0"} $name, scalar(@tbl), map {@$_} @tbl );
}

sub alive : Command {
  my($self, $h) = @_;
  my $id = $h->connection->data->{id} or return;
  $h->server->data->{alive_timers}{ $id } = AnyEvent->timer( after => 150, cb => sub {
    $self->not_alive($h, $id);
  } );
}

sub stats : Command {
  my($self, $h, $rawstat, $room_id) = @_;
  state $intervals = {
    wood        => 60 * 25,
    stone       => 60 * 25,
    food        => 120 * 25,
    peasants    => 600, # 16 ticks
    units       => 1000, # 80 ticks
    population2 => 1000,
  };
  state $coefs = {
    wood        => 25 / 2,
    stone       => 25 / 2,
    food        => 25 / 2,
    peasants    => 200,
    units       => 50,
    population2 => 50,
  };
  $self->alive($h);
  $room_id =~ s/\0//;
  my $room = $h->server->data->{rooms_by_id}{$room_id} or return;
  my $user_id = $h->connection->data->{id};
  my $player = $room->{players}{$user_id} or return;
  my $stat = {};
  @$stat{qw<time pc player_id status scores population wood gold stone food iron coal peasants units>}
    = unpack "LCLC SSLLLLLLSS", $rawstat;
  return unless $user_id == $stat->{player_id};
  $room->{time} = $stat->{time} if !$room->{time} || $room->{time} < $stat->{time};
  $player->{time} ||= 0;
  $player->{stat_cycle} ||= { peasants => 0, units => 0, scores => 0 };
  if($player->{time} > $stat->{time}) {
    $h->log->error("player.time > stat.time");
    return;
  }
  my $interval = $stat->{time} - $player->{time};
  my $old_stat = $player->{stat} || { %$stat, time => 0, population2 => $stat->{units} + $stat->{peasants}, casuality => 0 };
  if(!$player->{stat} && $stat->{scores} == 0 && $stat->{population} == 0) {
    my $theam = $player->{theam};
    my $parent;
    for my $pl (@{$room->{started_players}}) {
      if($pl->{theam} == $theam) {
        $parent = $pl if $player->{id} != $pl->{id};
        last;
      }
    }
    if($parent) {
      $player->{zombie} = 1;
      $player->{color} = $parent->{color};
    }
  }
  for my $res (qw<peasants units>) {
    $player->{stat_cycle}{$res}++ if $stat->{$res} < ($old_stat->{$res} - $player->{stat_cycle}{$res} * 0x10000);
    $stat->{$res} += $player->{stat_cycle}{$res} * 0x10000;
  }
  my $scores_change = $stat->{scores} - $old_stat->{scores};
  if(abs($scores_change) > 0x7FFF) {
    if($scores_change > 0) {
      $player->{stat_cycle}{scores}--;
    } else {
      $player->{stat_cycle}{scores}++;
    }
  }
  $stat->{real_scores} = $player->{stat_cycle}{scores} * 0x10000 + $stat->{scores};
  $stat->{population2} = $stat->{units} + $stat->{peasants};
  for(qw<gold iron coal>) {
    $stat->{"change_$_"} = ($stat->{$_} - $old_stat->{$_}) / $interval * 25 / 2;
  }
  for my $res (qw<wood food stone peasants units population2>) {
    my $change = $stat->{$res} - $old_stat->{$res};
    push @{$player->{stat_history}{"change_$res"}}, [$change, $stat->{time}, $interval];
    $player->{stat_history}{"sum_$res"} += $change;
    while(@{$player->{stat_history}{"change_$res"}} && $player->{stat_history}{"change_$res"}[0][1] < $stat->{time} - $intervals->{$res}) {
      my $r = shift @{$player->{stat_history}{"change_$res"}};
      $player->{stat_history}{"sum_$res"} -= $r->[0];
    }
    $stat->{"change_$res"} = $player->{stat_history}{"sum_$res"} / ($stat->{time} - ($player->{stat_history}{"change_$res"}[0][1] - $player->{stat_history}{"change_$res"}[0][2])) * $coefs->{$res};
  }
  my $casuality_change = ($stat->{population2} - $old_stat->{population2}) - ($stat->{population} - $old_stat->{population});
  $stat->{casuality} = $old_stat->{casuality} + $casuality_change;
  $player->{time} = $stat->{time};
  $player->{stat} = $stat;
}

sub leave : Command {
  my($self, $h) = @_;
  if($h->connection->data->{id}) {
    my $room = $h->server->leave_room( $h->connection->data->{id} );
    delete $h->server->data->{alive_timers}{ $h->connection->data->{id} };
    if($room) {
      if($room->{host_id} == $h->connection->data->{id}) {
        $h->log->info($h->connection->log_message . " " . $h->req->ver . " #leave his room $room->{id} $room->{title}");
      } else {
        $h->log->info($h->connection->log_message . " " . $h->req->ver . " #leave room $room->{id} $room->{title}");
      }
    } else {
      $h->log->warn($h->connection->log_message . " " . $h->req->ver . " have not room for leave");
    }
  } else {
    $h->log->warn($h->connection->log_message . " " . $h->req->ver . " no id for live room");
  }
}

sub start : Command {
  my($self, $h, $sav, $map, $players_count, @players_list) = @_;
  if(0 && $map =~ /^RN[012] [0-9A-F]+ [0-9A-Z]*3[0-9A-Z]{3} [0-9A-Z]+ [0-9A-Z]+\.m3d\0?$/) { # 1 апреля, 7млн. ресурсов :)
    my($sec, $min, $hour, $day, $mon) = localtime();
    if($mon == 3 && ($day == 1 || $day == 2 && $hour < 5)) {
      $h->push_command(LW_bonus => '700');
    }
  }
  my $room = $h->server->start_room( $h->connection->data->{id}, { ai => scalar($sav =~ /<AI>/) } );
  if($room) {
    if($room->{host_id} == $h->connection->data->{id}) {
      $h->log->info($h->connection->log_message . " " . $h->req->ver . " #start his game $room->{id} $room->{title}");
    } else {
      $h->log->info($h->connection->log_message . " " . $h->req->ver . " #start game $room->{id} $room->{title}");
    }
  } else {
     $h->log->info($h->connection->log_message . " " . $h->req->ver . " #start game ?unknown?");
     $h->log->warn($h->connection->log_message . " have not game for start"); 
  }
  if($room) { # установка таймаутов
    for my $player_id (keys %{$room->{players}}) {
      $h->server->data->{alive_timers}{ $player_id } = AnyEvent->timer( after => 150, cb => sub {
        $self->not_alive($h, $player_id);
      } );
    }
    if($h->connection->data->{id} == $room->{host_id}) { # save player data
      s/\0// for $map, $players_count, @players_list;
      $room->{map} = $map;
      if($players_count > 7) {
        $h->log->error("bad players count $players_count");
      }
      for(my $i = 0; $i < $players_count; $i++) {
        my($player_id, $nation, $theam, $color) = splice(@players_list, 0, 4);
        $h->log->warn("no player with id $player_id") unless $room->{players}{$player_id};
        my $player = $room->{players}{$player_id} || {};
        $player->{nation} = $nation;
        $player->{theam} = $theam;
        $player->{color} = $color;
        push @{$room->{started_players}}, $player; 
      }
    }
  }
  if($h->connection->data->{account}) { # отправка статы в wcl/lcn аккаунт
    s/\0$// for $sav, $map, $players_count, @players_list;
    $_ = int($_) for $players_count, @players_list;
    my $post_room;
    if($room) {
      my @fields = qw<id title max_players players_count level ctime>;
      @$post_room{@fields} = @$room{@fields};
      $_ = int($_) for @$post_room{qw<id max_players players_count level ctime>};
    } else {
      $post_room = { id => $room->{id}, lost => JSON::true };
    }

    $post_room->{map} = $map;
    $post_room->{save_from} = int($1) if $sav && $sav =~ /^sav:\[(\d+)\]$/;

    my $i = 0;
    while(@players_list && $i < $players_count) {
      my($player_id, $nation, $theam, $color) = splice(@players_list, 0, 4);
      $player_id = unpack 'L', pack 'l', $player_id;
      my $post_player;
      if(my $player = $h->server->data->{players}{$player_id}) {
        my @fields = qw<id nick connected_at>;
        @$post_player{@fields} = @$player{@fields};
        $_ = int($_) for @$post_player{qw<id connected_at>};
        if($player->{account}) {
          my @fields = qw<type profile id>;
          @{$post_player->{account}}{@fields} = @{$player->{account}}{@fields};
        }
      } else {
        my $post_player = { id => $player_id, lost => JSON::true };
      }
      @$post_player{qw<nation theam color>} = ($nation, $theam, $color);
      push @{$post_room->{players}}, $post_player;
      $i++;
    }

    $h->server->post_account_action($h, 'start', $post_room);
  }
}

sub endgame : Command {
    my($self, $h, $game_id, $player_id, $result) = @_;
    ($_) = /(-?\d+)/ for $game_id, $player_id, $result;
    $player_id = unpack 'L', pack 'l', $player_id;
    my $id = $h->connection->data->{id};
    my $nick_name = ($h->server->data->{players}{$player_id} ? $h->server->data->{players}{$player_id}{nick} : '.') . ":$player_id";
    my $result_str = $result == 1 ? 'loose' :
        $result == 2 ? 'win' :
        $result == 5 ? 'disconnect' :
        "?$result?"
    ;
    my $room = $h->server->data->{rooms_by_id}{ $game_id };
    $h->log->info(
        $h->connection->log_message . " " . $h->req->ver . " #send game result: $nick_name $result_str in "
        . ($room && $id && $room->{host_id} == $id ? "his " : "" )
        . "game $game_id"
        . ($room ? " $room->{title}" : "")
    );
}
sub upfile  : Command {}
sub unsync  : Command {}

sub _before {
  my($self, $h) = @_;
  my $cmd  = $h->req->cmd;
  my $args = $h->req->argsref;
  my $message = $h->connection->log_message;
  my $win = $h->req->win;
  my $key = $h->req->key;
  s/\0$// for $win, $key;
  $message .= ' ' . $h->req->ver . ' ' . $h->req->lang . ' ' . $h->req->num . ' "' . String::Escape::printable($win) . '" "' . String::Escape::printable($key) . '"';
  if($cmd eq 'upfile') {
    $message .= " -$cmd " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[0..1];
    my($offset, $size, $buffer) = unpack "LLA*", $args->[2];
    $message .= " offset=$offset,size=$size,realsize=" . length($buffer);
    $message .= " " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[3..$#$args] if $#$args >= 3;
  } elsif($cmd eq 'alive') {
    $message .= " -$cmd ";
    $message .= uc unpack 'H*', $args->[0];
    $message .= " " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[1..$#$args] if $#$args >= 1;
  } elsif($cmd eq 'stats') { 
    my @all = unpack "LCLC SSLLLLLLSSH*", $args->[0];
    $_ //= '' for @all;
    my($t, $pc, $id, $st, $sc, $pp, $w, $g, $s, $f, $i, $c, $p, $u, $tail) = @all;
    $message .= " -$cmd";
    $message .= " t=$t,pc=$pc,id=$id,st=$st,sc=$sc,pp=$pp,w=$w,g=$g,s=$s,f=$f,i=$i,c=$c,p=$p,u=$u";
    $message .= ",tail=$tail" if defined($tail) && length($tail) > 0;
    $message .= " " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[1..$#$args] if $#$args >= 1;
  } elsif($cmd eq 'GETTBL') {
    my $gettbl_log_interval = $h->server->config->{gettbl_log_interval} || 1;
    return if $h->connection->data->{gettbl_count}++ % $gettbl_log_interval;
    $message .= " -$cmd " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[0..1];
    $message .= ' rows=' . (join ':', map {sprintf "%08X", $_} unpack 'L*', $args->[2]);
    $message .= " " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args[3..$#$args] if $#$args >= 3;
    if($gettbl_log_interval != 1) {
      $message .= " #1/$gettbl_log_interval";
    }
  } else {
    if($cmd eq 'go' && $args->[0] eq 'try_enter') {
      $args = [@$args];
      for(@$args) {
        s/^PASSWORD=\K.*/.../s;
      }
    }
    $message .= " -$cmd " . join " ", map { '"' . String::Escape::printable($_) . '"' } @$args;
  }
  $h->log->info($message);
}

sub not_alive {
  my($self, $h, $id) = @_;
  my $connection = $h->server->connection_class->connection_by_pid($id);
  delete $h->server->data->{alive_timers}{ $id };
  my $room = $h->server->leave_room( $id );
  if($room && $connection) {
    $h->log->info($connection->log_message . " " . $h->req->ver . " #not alive in" . ($room->{host_id} == $id ? " his" : "") . " room $room->{id} $room->{title}");
  }
  # A client silent for 150s is gone even if its TCP is half-open (browser tab frozen/killed, net
  # dropped) and _close never fired. leave_room only closed its room; also drop it from the online
  # list so it stops showing as a ghost player in the lobby.
  delete $h->server->data->{players}{ $id };
}

sub url :Command {
  my($self, $h, $url) = @_;
  $h->push_command(LW_time => 0, "open:$url");
}

__PACKAGE__->meta->make_immutable();
