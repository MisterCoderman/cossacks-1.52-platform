package GSC::Server;
our $VERSION = '0.01';
use Mouse;
use Coro;
use Coro::Socket;
use IO::Socket();
use Scalar::Util;
use GSC::Stream;
use GSC::Server::Handler;
use GSC::Server::Request;
use GSC::Server::Connection;
use GSC::Server::ConnectionController;
use attributes;

has host => (is => 'rw');
has port => (is => 'rw');
has _main_coro => (is => 'rw');
has log => (is => 'rw', builder => '_create_logger');
has config => (is => 'rw', builder => '_create_config');
has _connection_controller => (is => 'rw', default => sub { GSC::Server::ConnectionController->new() });
has data => (is => 'rw', default => sub { +{} });
has use_sig => (is => 'ro', default => 1);
has max_request_size => (is => 'rw', default => 4194304);

sub BUILD {
  my($self) = @_;
  $self->init();
}

sub start {
  my($self) = @_; 
  my $main_coro = async {
    eval {
      $self->_main;
    };
    if($@) {
      $self->log->fatal($@);
    }
  };
  $self->_main_coro($main_coro);
  $main_coro->cede_to;
  return $self;
}

sub stop {}

sub join {
  my($self) = @_;
  $self->_main_coro->join;
  return $self;
}

sub _main {
  my($self) = @_;
  my $s = $self->_create_server_socket();
  if($s) {
    my $server_socket = Coro::Socket->new_from_fh( $s );
    $self->log->notice("Listen ".$self->host.":".$self->port);
    while(my($client_socket, $client_sockaddr) = $server_socket->accept) {
      my $connection_coro = Coro->new($self->can('_accept'), $self, $client_socket, $client_sockaddr);
      $connection_coro->ready;
      $connection_coro->cede_to;
    }
  } else {
    $self->log->fatal("Can't listen ".$self->host.":".$self->port.( $! ? "- $!" : '')."\n"), return;
  }
}

sub _create_server_socket {
  my($self) = @_;
  IO::Socket::INET->new(
    LocalPort => $self->port,
    Bind => $self->host,
    Listen => 20,
    Proto => 'tcp',
    Reuse => 1,
    Timeout => 3600,
  );
}

sub _create_logger {
  my($self) = @_;
  require GSC::Server::Logger;
  return GSC::Server::Logger->new(
    context => $self->meta->name
  );
}

sub _accept {
  my($self, $client_socket, $client_sockaddr) = @_;
  eval {
    my $connection = $self->connection_class->new(
      _socket => $client_socket,
      _sockaddr => $client_sockaddr,
    );
    my $h = $self->handler_class->new(
        connection => $connection,
        log => $self->log,
        server => $self,
    );
    $self->connection_controller->_connect($h);
    if($h->closed) {
      $client_socket->close();
      $self->connection_controller->_close($h);
    } else {
      my $first = 1;
      while(my $req = GSC::Stream->from_read($client_socket, $self->max_request_size)) {
        if($req->error) {
          $self->log->error('error while parsing request: ' . $req->error_text); 
          last;
        }
        if($req->cmdset->count == 0) {
            $self->log->error("empty command list. ignoring") if $req->cmdset->count > 1;
            next;
        }
        my $ver = $req->ver;
        my $lang = $req->lang;
        my($cmd) = $req->cmdset->all;
        $self->log->warn("more that one command in request. ignoring") if $req->cmdset->count > 1;
        my $name = $cmd->name;
        my @args = $cmd->args;
        if(@args < 2) {
          $self->log->warn("args count < 2");
        }
        my $key = pop @args;
        my $win = pop @args;
        my $r = $self->request_class->new(
          ver => $ver,
          lang => $lang,
          num => $req->num,
          key => $key,
          win => $win,
          cmd => $name,
          argsref => \@args,
        );
        my $h = $self->handler_class->new(
          req => $r,
          connection => $connection,
          log => $self->log,
          server => $self,
        );
        $self->_handle_command($h, \$first, $client_socket);
      }
      $self->connection_controller->_close($h);
    }
  };
  $self->log->error($@) if $@;
}

sub _handle_command {
  my $command_coro = Coro->new(sub {
    my($self, $h, $first, $client_socket) = @_;
    my $req = $h->req;
    do {
      my $command_controller = $self->command_controller($h);
      if($$first) {
        $$first = 0;
        eval { $command_controller->_first($h) };
        $self->log->error($@) if $@;
        last if $h->closed;
      }
      eval { $command_controller->_before($h) };
      $self->log->error($@) if $@;
      last if $h->closed;
      my $name = $req->cmd;
      my $code = $command_controller->can($name);
      if($code && grep {$_ eq 'Command'} attributes::get($code)) {
        eval { $command_controller->$name($h, @{$req->argsref}) };
      } else {
        eval { $command_controller->_default($h) };
      }
      $self->log->error($@) if $@;
    };
    if($h->response) {
      my $res = GSC::Stream->new($req->num, $req->lang, $req->ver);
      $res->cmdset->add($_->[0] => [ @$_[1 .. $#$_], $req->win ]) for @{$h->response};
      $client_socket->write($res->bin);
    }
    if($h->closed) {
      $client_socket->close();
    }
  }, @_);
  $command_coro->ready;
  $command_coro->cede_to;
}

sub _create_config { +{} }

sub connection_controller {
  my($self) = @_;
  return $self->_connection_controller
}

sub command_controller { # abstract
  my($self, $h) = @_;
  die __PACKAGE__ . "->command_controller is Abstract!";
}

sub handler_class { 'GSC::Server::Handler' }
sub connection_class { 'GSC::Server::Connection' }
sub request_class { 'GSC::Server::Request' }

__PACKAGE__->meta->make_immutable();

=encoding utf-8

=head1 NAME

GSC::Server - framework для написания сервера для игры казаки или ЗА по протоколу GSC

=head1 SYNOPSIS

  package MyServer {
    use Mouse;
    extends 'GSC::Server';
    has _command_controller => (is => 'rw', default => sub { GSC::Server::CommandController->new() });
    
    sub init {
      my($self) = @_;
      ... # иницилизация сервера
    }
    
    # Возвращает класс/объект контроллера комманд, абстрактный метод
    sub command_controller {
      my($self, $h) = @_;
      return $self->_command_controller;
    }
    
    # Возвращает класс/объект контроллера соединения, объект GSC::Server::ConnectionController по умолчанию
    sub connection_controller {
      my($self) = @_;
      ...
    }
    
    sub handler_class { 'GSC::Server::Handler' }  # Класс хендлера, GSC::Server::Handler по умолчанию
    sub connection_class { 'GSC::Server::Connection' } # Класс соединение, GSC::Server::Connection по умолчанию
    sub request_class { 'GSC::Server::Request' } # Класс gsc запроса, GSC::Server::Request по умолчанию
    
  }
  
  package MyServer::CommandController {
    use Mouse;
    extends 'GSC::Server::CommandController';
    use GSC::Server::Bridge::HTTP;
    
    my $http = GSC::Server::Bridge::HTTP->new( base => 'http://127.0.0.1/root/' );
  
    sub open : Command {
      my($self, $h, $url, $params) = @_;
      $http->handle($h, 'POST', $url, { X-GSC-Header-Key => $h->req->key }, \$params); # http мост на команду open
    }

    sub hello : Command {
      my($self, $h) = @_;
      $h->push_command( LW_show => '... hello, world! ...' ); 
    }

    sub foo: Command {
      my($self, $h, @args) = @_;
      
      @args; # аргументы команды
      
      $h; # хендлер, GSC::Server::Handler по умолчанию
      
      $h->server; # объект сервера (MyServer)
      $h->server->data; # данные, привязанные к серверу, ссылка на хеш (deprecated?)
      
      $h->req; # запрос, GSC::Server::Request по умолчанию
      $h->req->num; # номер запроса от клиента
      $h->req->ver; # версия игры
      $h->req->lang; # язык клиента
      $h->req->win; # winid
      $h->req->key; # ключ авторизации
      $h->req->cmd; # команда к серверу
      $h->req->argsref; # аргуметы команды (ссылка на массив)
      
      $h->connection; # соединение, GSC::Server::Connection по умолчанию
      $h->connection->ip; # ip в текстовом представлении
      $h->connection->int_ip; # ip в числовом представлении
      $h->connection->data; # данные, привязаные к соединению, ссылка на хеш (deprecated?)
      
      $h->data; # данные, привязанные к запросу, ссылка на хеш
      
      $h->response; # Ответ от сервера.
                    # Ссылка на список комманд вида [[LW_command1 => ...], [LW_command2 => ...]], или undef, если на эту команду не будет ответа от сервера
      $h->push_command( LW_command => ... ); # добавить комаду в ответ
      $h->push_commands( [LW_command1 => ...], [LW_command2 => ...] ); # добавить комманды в ответ
      $h->push_response( [[LW_command1 => ...], [LW_command2 => ...]] ); # добавить ответ
      $h->push_empty(); # добавить пустой список в ответ, если в ответ ничего не добавлено, или ничего не делать, если уже есть ответ на комманду
      
      $h->close(); # закрыть соединение после отправки ответа
      $h->closed; # true, если close() уже было вызвано
      
      $h->data; # данные, привязаные к запросу, ссылка на хеш (deprecated?)
      
      $h->log; # логгер, GSC::Server::Logger по умолчанию

    }
    
    sub _before { # выполняется перед выполнением метода каждой команды
      my($self, $h) = @_;
    }
    
    sub _after { # выполняется после выполнения метода каждой команды
      my($self, $h) = @_;
    }
    
    sub _first { # выполняется перед выполнением первой команды в рамках текущего соединения
      my($self, $h) = @_;
    }
    
    sub _default { # выполняется, если не существует подходящего метода для комманды
      my($self, $h) = @_;
    }
    
  }
  
  MyServer->new(
    port => 34001,
    host => 'localhost',
  )->start->join;

=head1 DESCRIPTION

Базовый класс для создания сервера по протоколу GSC. Ваш класс сервера наследуется от него. Все классы сервера созданы на фреймворке L<Mouse>. Многопоточность реализуется за счет L<Coro> и L<AnyEvent>

=head1 METHODS

=head2 Server->new()

Создает объект сервера

=head2 $server->start()

Запускает сервер, слушает порт

=head2 $server->join()

Загружает выполняет $coro->join главной корутины

=head2 $server->command_controller($h)

Абстрактный. Должен возвращать объект контроллера комманд, интерфейс см. L<GSC::Server::CommandController>. Единственный абстрактный метод. Принимает хендлер, можно возвращать разные контроллера в зависимости от версии игры (Казаки/Завоевания Америки) в рамках одного сервера, а также в зависимости от других параметров запроса.

=head2 $server->connection_controller()

Виртуальный. Должен возвращать объект контроллера соединения, интерфейс см. L<GSC::Server::ConnectionController>. По умолчанию возвращает объект GSC::Server::ConnectionController

=head2 $server->handler_class()

Виртуальный. Должен возвращать класс хендлера, L<GSC::Server::Handler> по умолчанию.

=head2 $server->connection_class()

Виртуальный. Должен возвращать класс соединения, L<GSC::Server::Connection> по умолчанию.

=head2 $server->request_class()

Виртуальный. Должен возвращать класс запроса, L<GSC::Server::Request> по умолчанию.

=head2 $server->init()

Виртуальный. Инициализация сервера, выполняется после new()

=head1 FIELDS

=head2 host

host для серверного сокета. Можно иницилизировать, передавая Server->new(), а можно в $server->_create_config() из конфига

=head2 port

port для серверного сокета. Можно иницилизировать, передавая Server->new(), а можно в $server->_create_config() из конфига

=head2 log

Объект логгер сервера

=head2 config

Хеш/Объект, содержащий конфиг сервера

=head2 data

Хеш, содеражащий данные, привязанные к экземпляру сервера. Возможно, стоит убрать, и использовать для хранения данных только поля объекта GSC::Server.
