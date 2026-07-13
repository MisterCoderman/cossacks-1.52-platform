package SimpleCossacksServer::Connection;
use Mouse;
use Scalar::Util;
extends 'GSC::Server::Connection';
my $MAXID = 1;
has id => (is => 'ro', default => sub { $MAXID++ });
has ctime => (is => 'ro', default => sub { time });

sub log_message {
  my($self) = @_;
  my $message = $self->id . " " . $self->ip . " ";
  my $cd = $self->data;
  if($cd->{id} || $cd->{nick}) {
    $message .= "$cd->{nick}:";
    $message .= $cd->{id} if $cd->{id};
  } else {
    $message .= "."
  }
  return $message;
}

my %CONNECTION_BY_PID;
sub connection_by_pid {
  my($class, $pid, $connection) = @_;
  if(@_ > 2) {
    $CONNECTION_BY_PID{$pid} = $connection;
    Scalar::Util::weaken($CONNECTION_BY_PID{$pid});
    return $CONNECTION_BY_PID{$pid};
  } else {
    return $CONNECTION_BY_PID{$pid};
  }
}

sub DEMOLISH {
  my($self) = @_;
  delete $CONNECTION_BY_PID{$self->data->{id}} if $self->data->{id};
}

__PACKAGE__->meta->make_immutable();
