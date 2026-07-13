package GSC::Server::Logger;
use Mouse;
use AnyEvent::Log;

has context => (is => 'ro', required => 1);
has _ctx => (is => 'rw');

sub BUILD {
  my $self = shift;
  $self->_ctx(AnyEvent::Log::ctx $self->context);
  $AnyEvent::Log::FILTER->level('info');
}

sub fatal {
  my $self = shift;
  $self->_ctx->log('fatal', @_);
}

sub error {
  my $self = shift;
  $self->_ctx->log('error', @_);
}

sub warn {
  my $self = shift;
  $self->_ctx->log('warn', @_);
}

sub notice {
  my $self = shift;
  $self->_ctx->log('notice', @_);
}

sub info {
  my $self = shift;
  $self->_ctx->log('info', @_);
}

sub debug {
  my $self = shift;
  $self->_ctx->log('debug', @_);
}

__PACKAGE__->meta->make_immutable();