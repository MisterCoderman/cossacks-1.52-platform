package GSC::Streamer;
use strict;
use warnings;
our $VERSION = '0.01';
use GSC::Stream;

sub new {
  my($class, $num, $lang, $ver) = @_;
  my $self = bless {} => ref($class) || $class;
  $self->num($num);
  $self->lang($lang);
  $self->ver($ver);
  return $self;
}

sub lang {
  my($self) = shift;
  if(@_) {
    return $self->{lang} = $_[0];
  } else {
    return $self->{lang}
  }
}

sub ver {
  my($self) = shift;
  if(@_) {
    return $self->{ver} = $_[0];
  } else {
    return $self->{ver};
  }
}

sub num {
  my($self) = shift;
  if(@_) {
    return $self->{num} = $_[0];
  } else {
    return $self->{num};
  }
}

sub new_stream {
  my($self, @args) = @_;
  my $stream = GSC::Stream->new($self->num, $self->lang, $self->ver, @args);
  $self->num($self->num + 1);
  return $stream;
}

1;
__END__

=head1 NAME

GSC::Streamer - Module for GSC lobby server protocol
