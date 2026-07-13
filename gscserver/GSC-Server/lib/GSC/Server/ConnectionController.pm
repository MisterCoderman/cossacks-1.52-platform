package GSC::Server::ConnectionController;
use Mouse;

sub _connect {
  my($self, $h) = @_;
  $h->log->info("client " . $h->connection->ip . " connect");
}
sub _close {
  my($self, $h) = @_;
  $h->log->info("client " . $h->connection->ip . " disconnect");
}

__PACKAGE__->meta->make_immutable();
