#ifndef _NETWORK_HPP
#define _NETWORK_HPP

#include "array.hpp"

#include <string>

#define RECV_BUFFER_SIZE 1024 * 1024
namespace network {

/*
   Connects to a remote host and returns a file descriptor representing
   the socket. A negative value means that the connection failed.
 */
int connect(const std::string& host, const int& port);

/*
   Closes a socket.
 */
void close(int fd);

/*
   Writes the data in the _content_ array into the giving socket.
 */
void write(int fd, const array::array* content);

/*
   Reads data from the socket specified in _fd_ and returns an array containing
   this data.
 */
array::array* read(int fd);

/*
   Reads len bytes of data from the socket specified in _fd_ and returns an
   array containing this data.
 */
array::array* read(int fd, size_t len);

}
#endif
