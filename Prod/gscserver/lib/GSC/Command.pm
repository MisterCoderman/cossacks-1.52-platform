package GSC::Command;
use strict;
use warnings;
use Carp;
our $VERSION = '0.01';
use overload 
  '""' => \&string,
  'cmp' => sub {
    !$_[2] ? ("$_[0]" cmp "$_[1]") : ("$_[1]" cmp "$_[0]");
  },
;
  
sub new {
  my($class, $name, $args) = @_;
  my $self = bless {}, ref($class) || $class;
  $self->name($name);
  $self->addarg(@$args);
  return $self;
}

sub from_string {
  my($class, $string) = @_;
  defined $string or croak "string is undefined";
  my($name, @args) = split /&/, $string, -1;
  @args = map {$class->_decode_arg($_)} @args;
  return $class->new($name, \@args);
}

sub name {
  my($self) = shift;
  if(@_) {
    defined $_[0] or croak "command name is undefined";
    return $self->{name} = $_[0];
  } else {
    return $self->{name};
  }
}

sub args {
  my($self) = shift;
  return @{$self->{args}};
}

sub args_count {
  my($self) = shift;
  return scalar @{$self->{args}};
}

sub addarg {
  my($self) = shift;
  $self->{args} ||= [];
  push @{$self->{args}}, $_ for @_;
}

sub string {
  my($self) = @_;
  return join "&", $self->name, map {$self->_encode_arg($_)} $self->args;
}

sub _decode_arg { # static
  my($class, $arg) = @_;
  $arg =~ s{\\(..)}{
    chr(hex($1));
  }ge;
  return $arg;
}

sub _encode_arg {
  my($class, $arg) = @_;
  for($arg) {
    s/\\/\\5C/g;
    s/&/\\26/g;
    s/\|/\\7C/g;
    s/\0/\\00/g;
  }
  return $arg;
}

1;
