package GSC::CommandSet;
use strict;
use warnings;
use Scalar::Util 'blessed';
use GSC::Command;
our $VERSION = '0.01';
use Carp;
use overload 
  '""' => \&string,
  'cmp' => sub {
    !$_[2] ? ("$_[0]" cmp "$_[1]") : ("$_[1]" cmp "$_[0]");
  },
;

sub new {
  my($class, @list) = @_;
  my $self = bless {}, ref($class) || $class;
  $self->add(@list);
  return $self;
}

sub from_string {
  my($class, $str) = @_;
  $str =~ s/^GW\|//;
  return $class->new( map {GSC::Command->from_string($_)} split /\|/, $str, -1 );
}

sub from_bin {
  my($class, $bin) = @_;
  my($cmds, $p) = unpack "S.", $bin;
  my @cmds;
  my $self = $class->new;
  for(my $i = 0; $i < $cmds; $i++) {
    (my($name), $p) = unpack("x$p C/a .", $bin);
    (my($args), $p) = unpack("x$p S .", $bin);
    my @args;
    for(my $j = 0; $j < $args; $j++) {
      (my($arg), $p) = unpack("x$p L/a .", $bin);
      push @args, $arg;
    }
    $self->add($name => \@args);
  }
  return $self;
}

sub add {
  my($self, @list) = @_;
  push @{$self->{commands}}, $self->_list_to_cmdset(@list);
}

sub all {
  my($self) = @_;
  return @{$self->{commands}};
}

sub count {
  my($self) = @_;
  return scalar @{$self->{commands}};
}

sub _list_to_cmdset {
  my($self, @list) = @_;
  my($prev, @cmds);
  for(@list) {
    my $cmd;
    if(ref($_) ne 'ARRAY') {
      if(blessed($_) && $_->isa('GSC::Command')) {
        $cmd = $_;
      } elsif(ref($_) ne 'ARRAY') {
        $cmd = GSC::Command->new($_);
      }
      push @cmds, $cmd;
      $prev = $cmd;
    } else {
      defined $prev or croak ref($self)." invalid init list";
      $prev->addarg(@$_);
      $prev = undef;
    }
  }
  return @cmds;
}

sub string {
  my($self) = @_;
  return 'GW|' . join '|', map {$_->string} $self->all;
}

sub bin {
  my($self) = @_;
  my @cmds = map{pack "C/a S/(L/a)", $_->name, $_->args} $self->all;
  return pack("S", scalar(@cmds)) . join "", @cmds;
}

1;
