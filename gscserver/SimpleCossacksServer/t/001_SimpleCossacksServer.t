# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl SimpleCossacksServer.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;
use Test::More tests => 4;
use Net::EmptyPort;
use Coro::Socket;
use GSC::Streamer;

BEGIN { use_ok('SimpleCossacksServer') };

my $port = Net::EmptyPort::empty_port();

my $server = new_ok(SimpleCossacksServer => [
  config_file => './etc/simple-cossacks-server.conf',
  port => $port,
]);

ok(eval { $server->start() }, "start server");

my $socket = Coro::Socket->new(
  PeerAddr => $server->host,
  PeerPort => $server->port,
  Proto => 'tcp',
  Timeout => 5,
);

my $streamer = GSC::Streamer->new(1, 0, 2);

my $req = $streamer->new_stream( echo => ['hello', 'world', 'win', 'key'] );
$socket->write($req->bin);
my $res = GSC::Stream->from_read($socket);
my $rs = [ map {[$_->name => $_->args]} $res->cmdset->all ];
is_deeply($rs, [['LW_echo', 'hello', 'world', 'win']], 'echo request');

done_testing();
