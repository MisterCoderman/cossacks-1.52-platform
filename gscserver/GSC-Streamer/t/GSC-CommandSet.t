# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl GSC-CommandSet.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 8;
BEGIN { use_ok('GSC::CommandSet') };

my($cmdset, $str, @set);
$cmdset = new_ok('GSC::CommandSet', [ 'LW_new', 'open' => ['default.dcml']]);
@set = $cmdset->all;
ok($set[0] eq 'LW_new' && $set[1] eq 'open&default.dcml', 'to string each');
$cmdset->add('LW_end');
@set = $cmdset->all;
ok($set[2] eq 'LW_end', '->add');
ok($cmdset->count == 3, '->count');

my $bin = $cmdset->bin;
@set = GSC::CommandSet->from_bin($bin)->all;
ok($set[0] eq 'LW_new' && $set[1] eq 'open&default.dcml' && $set[2] eq 'LW_end', '->bin, ->from_bin');

$str = 'GW|LW_new|LW_open&default.dcml|LW_end';
$cmdset = GSC::CommandSet->from_string($str);
ok($cmdset->string eq $str, '->from_string, ->string');
ok($cmdset eq $str, '"" overload');

#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

