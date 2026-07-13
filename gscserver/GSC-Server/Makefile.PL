use 5.014002;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'GSC::Server',
    VERSION_FROM      => 'lib/GSC/Server.pm', # finds $VERSION
    PREREQ_PM           => {
        'GSC::Streamer' => 0,
        'IO::Socket'    => 0,
        'Mouse'         => 0,
        'Coro',         => 0,
        'AnyEvent'      => 0,
        'Scalar::Util'  => 0,
        'Socket'        => 0,
}, # e.g., Module::Name => 1.1
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/GSC/Server.pm', # retrieve abstract from module
       AUTHOR         => '[-RUS-]AlliGator') : ()),
);
