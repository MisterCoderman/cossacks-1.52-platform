package SimpleCossacksServer::Template::Plugin::CMDFilter;
use Template::Plugin::Filter;
use base 'Template::Plugin::Filter';

sub init {
    my $self = shift;
    $self->{ _DYNAMIC } = 1;
    # first arg can specify filter name
    $self->install_filter($self->{ _ARGS }->[0] || 'cmd');
    return $self;
}

sub filter {
    my ($self, $text) = @_;
    $text =~ s/([&|\\}~,)])/sprintf "\\%02X", ord $1/ge;
    return $text;
}

1;
