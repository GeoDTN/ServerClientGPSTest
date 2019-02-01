#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <string>

#include <libgpsmm.h>

#include "socket.h"

class ClientSocket : private Socket
{
 public:

  ClientSocket ( std::string host, int port );
  virtual ~ClientSocket(){};

  const ClientSocket& operator << (  val2) const;
  const ClientSocket& operator >> ( val) const;

};

#endif // CLIENTSOCKET_H
