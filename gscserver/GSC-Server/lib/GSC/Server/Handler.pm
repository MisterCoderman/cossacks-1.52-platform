package GSC::Server::Handler;
use Mouse;

has req => (is => 'ro');
has _closed => (is => 'rw');
has response => (is => 'rw');
has data => (is => 'rw', default => sub { +{} });
has connection => (is => 'rw', weak_ref => 1);
has log => (is => 'ro', weak_ref => 1);
has server => (is => 'ro', weak_ref => 1);

sub close {
  my($self) = @_;
  $self->_closed(1);
}

sub closed {
  my($self) = @_;
  return $self->_closed;
}


sub push_empty {
  my($self) = @_;
  $self->response([]) unless $self->response;
  return $self;
}

sub push_command {
  my $self = shift;
  $self->response([]) unless $self->response;
  push @{$self->response}, [@_];
  return $self;
}

sub push_commands {
  my $self = shift;
  $self->response([]) unless $self->response;
  push @{$self->response}, @_;
}

sub push_response {
  my($self, $push) = @_;
  $self->response([]) unless $self->response;
  push @{$self->response}, @$push;
  return $self;
}


__PACKAGE__->meta->make_immutable();
