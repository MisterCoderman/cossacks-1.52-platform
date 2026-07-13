use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'SimpleCossacksServer',
    VERSION_FROM      => 'lib/SimpleCossacksServer.pm', # finds $VERSION
    PREREQ_PM         => {
        'GSC::Server' => 0,
        'Template' => 0,
        'Template::Plugin::POSIX' => 0,
        'Config::Simple' => 0,
        'POSIX' => 0,
        'String::Escape' => 0,
        'Getopt::Compact' => 0,
        'Net::EmptyPort' => 0, # for tests
        'Getopt::Long::Descriptive' => 0.097,
        'AnyEvent::HTTP' => 0,
        'LWP' => 0,
        'JSON' => 0,
        'Scalar::Util' => 0,
        'URI' => 0,
    },
    ($] >= 5.005 ?     ## Add these new keywords supported since 5.005
      (ABSTRACT_FROM  => 'lib/SimpleCossacksServer.pm', # retrieve abstract from module
       AUTHOR         => '[-RUS-]AlliGator') : ()),
    EXE_FILES         => ['script/simple-cossacks-server', 'script/cossacks-proxy'],
);
