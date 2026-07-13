package GSC::Server::CommandController;
use Mouse;
use Scalar::Util;

my %ATTRS;
my %ALLOWED;
BEGIN { %ALLOWED = ( Command => 1 ) }

sub MODIFY_CODE_ATTRIBUTES {
  my($class, $code, @attrs) = @_;
  my @bad = grep { !$ALLOWED{$_}  } @attrs;
  if(@bad) {
    return @bad;
  } else {
    $ATTRS{Scalar::Util::refaddr($code)} = \@attrs;
    return;
  }
}

sub FETCH_CODE_ATTRIBUTES {
  my($class, $code) = @_;
  my $addr = Scalar::Util::refaddr($code);
  return $ATTRS{$addr} ? @{$ATTRS{$addr}} : ();
}

sub _first   {}
sub _default {
  my($self, $h) = @_;
  $h->log->error("unknown command " . $h->req->cmd . "\n");
  $h->push_empty;
}
sub _before      {}
sub _before_response {}

__PACKAGE__->meta->make_immutable();
