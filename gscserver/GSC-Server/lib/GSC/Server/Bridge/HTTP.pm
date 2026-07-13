package GSC::Server::Bridge::HTTP;
use Mouse;
use LWP;
use Coro::LWP;
use JSON();
use Carp;

has prefix          => (is => 'rw');
has on_bridge_error => (is => 'rw');


sub bridge {
  my($self, $h, $method, $url, $params, $headers) = @_;
  $url = $self->prefix . $url if defined $self->prefix;
  my $ua = LWP::UserAgent->new;
  my $httpr;
  if($method eq 'POST') {
    $httpr = $ua->post($url, %$headers, Content => $params);
  } elsif($method eq 'GET') {
    my $u = URI::URL->new($url);
    if(defined $params) {
      $u->query_form($u->query_form, ref($params) eq 'ARRAY' ? @$params : %$params) if defined $params;
    }
    $httpr = $ua->get($u, %$headers);
  }
  if($httpr->is_success) {
    my ($send_response, $close, $response) = $self->_http2response($httpr);
    $h->close() if $close;
    $h->push_response($response);
  } else {
    $h->log->error( (ref($self)||$self) . "->bridge(...) bad response status " . $httpr->code . " on " . $url);
    $h->push_empty;
    $self->on_bridge_error->($httpr, $url, $params) if defined $self->on_bridge_error;
  }
}

my $JSON = JSON->new;
sub _http2response {
  my($self, $httpr) = @_;
  my $gsc_handler = $httpr->header('X-GSC-Handler');
  defined $gsc_handler or croak "X-GSC-Handler header is not defined";
  my($send_response, $close, $response);
  $close = $httpr->header('X-GSC-Close') ~~ 'yes';
  if($gsc_handler =~ /^(\w+):Content$/) {
    my $content = $httpr->content;
    my $command = $1;
    $response = [[$command => $content]];
    $send_response = 1;
  } elsif($gsc_handler eq 'json') {
    my $content = $httpr->content;
    eval {
      $response = $JSON->decode($content);
    };
    croak "invalid json response - " . $@ =~ s/.*\K at .*? line \d+\.\s*\Z//r if $@;
    ref($response) eq 'ARRAY' or croak 'bad json response';
    $send_response = 1;
  } elsif($gsc_handler eq 'no-response')  {
    $response = [];
    $send_response = 0;
  } elsif($gsc_handler eq 'empty') {
    $response = [];
    $send_response = 1;
  } else {
    croak "invalid X-GSC-Handler header";
  }
  return $send_response, $close, $response;
}


__PACKAGE__->meta->make_immutable();
