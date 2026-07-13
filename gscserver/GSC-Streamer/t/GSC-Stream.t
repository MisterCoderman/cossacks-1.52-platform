# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl GSC-Stream.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 4;
BEGIN { use_ok('GSC::Stream') };

#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

my $s;
$s = new_ok('GSC::Stream', [ 1, 3, 2, 'LW_new', 'open' => ['default.dcml'] ]);

ok($s->num == 1 && $s->lang == 3 && $s->ver == 2 && $s->cmdset eq 'GW|LW_new|open&default.dcml', 'test new object');

$s = GSC::Stream->from_bin($s->bin);
ok($s->num == 1 && $s->lang == 3 && $s->ver == 2 && $s->cmdset eq 'GW|LW_new|open&default.dcml', 'bin test');
