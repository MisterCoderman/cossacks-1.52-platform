use 5.014002;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
  NAME              => 'GSC::Streamer',
  VERSION_FROM      => 'lib/GSC/Streamer.pm', # finds $VERSION
  PREREQ_PM         => {
    'Compress::Zlib' => 0,
  },
  ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
  (ABSTRACT_FROM  => 'lib/GSC/Streamer.pm', # retrieve abstract from module
  AUTHOR         => '[-RUS-]AlliGator') : ()),
);
