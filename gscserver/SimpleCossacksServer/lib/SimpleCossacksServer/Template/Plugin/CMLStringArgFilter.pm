package SimpleCossacksServer::Template::Plugin::CMLStringArgFilter;
use Template::Plugin::Filter;
use base 'Template::Plugin::Filter';

sub init {
    my $self = shift;
    $self->{ _DYNAMIC } = 1;
    # first arg can specify filter name
    $self->install_filter($self->{ _ARGS }->[0] || 'arg');
    return $self;
}

sub filter {
    my ($self, $text) = @_;
    $text =~ s/"/'/g;
    $text =~ s/~//g;
    $text = '"' . $text . '"';
    return $text;
}

1;
