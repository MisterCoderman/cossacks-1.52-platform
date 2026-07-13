package GSC::Server::Request;
use Mouse;

has num => (is => 'ro');
has ver => (is => 'ro');
has lang => (is => 'ro');
has key => (is => 'ro');
has win => (is => 'ro');
has cmd => (is => 'ro');
has argsref => (is => 'ro');

sub args_count {
  my($self) = @_;
  return scalar @{$self->argsref};
}

__PACKAGE__->meta->make_immutable();