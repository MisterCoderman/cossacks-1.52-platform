package SimpleCossacksServer::Handler;
use Mouse;
extends 'GSC::Server::Handler';

sub is_american_conquest {
  my($self) = @_;
  return $self->req->ver ~~ [3, 8, 10] ? 1 : "";
}

sub view {
  my($self, $file, $vars) = @_;
  my $output;
  my %vars = %$vars if $vars;
  $vars{h} = $self;
  $vars{server} = $self->server;
  my $dir = $self->is_american_conquest ? "ac" : "cs";
  $self->server->template_engine->process("$dir/$file", \%vars, \$output)
    or $self->log->error( $self->server->template_engine->error()->as_string ), $output = '';
  return $output;
}

sub show {
  my($self, $file, $vars) = @_;
  $self->push_command( LW_show => $self->view($file, $vars) );
}

__PACKAGE__->meta->make_immutable();
