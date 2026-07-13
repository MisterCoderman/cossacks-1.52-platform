# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl GSC-Command.t'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';

use strict;
use warnings;

use Test::More tests => 9;
BEGIN { use_ok('GSC::Command') };


my($cmd, $str);
$cmd = new_ok('GSC::Command', [name => ['arg1', 'arg2']]);
ok($cmd->name eq 'name' && [$cmd->args] ~~ ['arg1', 'arg2'], 'check new object data');

$cmd->addarg('arg3', 'arg4');
ok($cmd->name eq 'name' && [$cmd->args] ~~ ['arg1', 'arg2', 'arg3', 'arg4'], '->add($arg1, $arg2)');

$cmd->name('name2');
ok($cmd->name eq 'name2', '->name($val)');

$cmd = GSC::Command->new('name' => ['arg1', 'arg2', 'escaped arg &|\\ \\|&']);
$str = 'name&arg1&arg2&escaped arg \\26\\7C\\5C \\5C\\7C\\26';
ok($cmd->string eq $str, '->string()');
ok($cmd eq $str, '"" overload');

$str = 'name&arg1&arg2& \\26\\7C\\5C \\5C\\7C\\26';
$cmd = GSC::Command->from_string($str);
ok($cmd->string eq $str, '->from_string($str)');

$str = 'name&arg1&arg2&';
$cmd = GSC::Command->from_string($str);
ok($cmd->string eq $str, 'empty argument');

#########################

# Insert your test code below, the Test::More module is use()ed here so read
# its man page ( perldoc Test::More ) for help writing this test script.

