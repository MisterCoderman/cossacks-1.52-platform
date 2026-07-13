package GSC::Stream;
use strict;
use warnings;
use Scalar::Util 'blessed';
our $VERSION = '0.01';
use GSC::CommandSet;
use Compress::Zlib;
use Carp;

sub new {
  my($class, $num, $lang, $ver, @args) = @_;
  my $cmdset;
  if(blessed($args[0]) && $args[0]->isa('GSC::CommandSet')) {
    $cmdset = $args[0];
  } else {
    $cmdset = GSC::CommandSet->new(@args);
  }
  my $self = bless {} => ref($class) || $class;
  $self->num($num);
  $self->ver($ver);
  $self->lang($lang);
  $self->cmdset($cmdset);
  return $self;
}

sub from_bin {
  my($class, $bin) = @_;
  my $self = bless {} => ref($class) || $class;
  my($num, $lang, $ver, $size, $len, $p) = unpack('SCCLL.', $bin);
  $size -= 0xC;
  my $cmdset_cmp = unpack("x$p a[$size]", $bin);
  my $cmdset_bin = uncompress($cmdset_cmp);
  carp "wrong stream len" if length($cmdset_bin) != $len;
  $self->num($num);
  $self->ver($ver);
  $self->lang($lang);
  $self->cmdset(GSC::CommandSet->from_bin($cmdset_bin));
  return $self;
}

sub from_read {
  my($class, $io, $max_size) = @_;
  $class->_from_read(0, $io, $max_size);
}

sub from_sysread {
  my($class, $io, $max_size) = @_;
  $class->_from_read(1, $io, $max_size);
}

sub _from_read {
  my($class, $sys, $io, $max_size) = @_;
  my $buff;
  $class->_read($sys, $io, $buff, 0xC) or return undef;
  my($num, $lang, $ver, $size, $len, $p) = unpack('SCCLL.', $buff);
  warn "\$num is 0" if $num == 0;
  if($max_size && $size > $max_size) {
    my $self = bless { error => 1, error_text => 'request to large', buffer => $buff } => ref($class) || $class;
    return $self;
  }
  $class->_read($sys, $io, $buff, $size - 0xC, 0xC);
  return $class->from_bin($buff);
}

sub _read {
  my $class = shift;
  my $sys = shift;
  my $io = shift;
  my $oop = blessed $io && $io->isa('IO::Handle');
  if($oop) {
    if($sys) {
      $io->sysread(@_);
    } else {
      $io->read(@_);
    }
  } else {
    if($sys) {
      sysread $io, $_[0], $_[1], $_[2]||0;
    } else {
      read $io, $_[0], $_[1], $_[2]||0;
    }
  }
}

sub lang {
  my($self) = shift;
  $self->_check_error;
  if(@_) {
    return $self->{lang} = $_[0];
  } else {
    return $self->{lang}
  }
}

sub ver {
  my($self) = shift;
  $self->_check_error;
  if(@_) {
    return $self->{ver} = $_[0];
  } else {
    return $self->{ver};
  }
}

sub num {
  my($self) = shift;
  $self->_check_error;
  if(@_) {
    return $self->{num} = $_[0];
  } else {
    return $self->{num};
  }
}

sub error {
  my($self) = shift;
  if(@_) {
    $_[0] or $self->error_text('');
    return $self->{error} = $_[0];
  } else {
    return $self->{error}
  }
}

sub error_text {
  my($self) = shift;
  if(@_) {
    return $self->{error_text} = $_[0];
  } else {
    return $self->{error_text}
  }
}

sub cmdset {
  my($self) = shift;
  $self->_check_error;
  if(@_) {
    return $self->{cmdset} = $_[0];
  } else {
    return $self->{cmdset};
  }
}

sub bin {
  my($self) = @_;
  $self->_check_error;
  my $cmdset_bin = $self->cmdset->bin;
  my $len = length($cmdset_bin);
  my $cmdset_compressed = compress($cmdset_bin);
  my $size = length($cmdset_compressed);
  $size += 0xC;
  my $bin = pack("SCCLL", $self->num, $self->lang, $self->ver, $size, $len);
  $bin .= $cmdset_compressed;
  return $bin;
}

sub _check_error {
  my($self, $method) = @_;
  if($self->error) {
    croak ref($self).": can't use ->$method, broken stream";
  };
}

1;
