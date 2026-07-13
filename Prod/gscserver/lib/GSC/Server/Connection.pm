package GSC::Server::Connection;
use Mouse;
use Socket();

has _socket => (is => 'ro', weak_ref => 1);
has _sockaddr => (is => 'ro');
has data => (is => 'rw', default => sub { +{} });
has ip => (is => 'rw');
has int_ip => (is => 'rw');
has port => (is => 'rw');

sub BUILD {
  my($self) = @_;
  if($self->_sockaddr) {
    my($port, $addr) = Socket::sockaddr_in($self->_sockaddr);
    $self->ip( Socket::inet_ntoa $addr );
    $self->int_ip( unpack 'L', $addr );
    $self->port( $port );
  }
}

__PACKAGE__->meta->make_immutable();
