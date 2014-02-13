/*
 * (c) 2013 Good Technology Corporation. All rights reserved.
 */

#ifndef _GD_C_SYS_SOCKET_H_
#define _GD_C_SYS_SOCKET_H_

#include <sys/types.h>
#include <sys/socket.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef GD_C_API
# define GD_C_API
#endif
    
    GD_C_API int GD_accept(int, struct sockaddr * __restrict addr, socklen_t * __restrict addrlen);
    GD_C_API int GD_bind(int, const struct sockaddr *, socklen_t);
    GD_C_API int GD_connect(int, const struct sockaddr *, socklen_t);
    GD_C_API int GD_getpeername(int, struct sockaddr * __restrict, socklen_t * __restrict);
    GD_C_API int GD_getsockname(int, struct sockaddr * __restrict, socklen_t * __restrict);
    GD_C_API int GD_getsockopt(int, int, int, void * __restrict, socklen_t * __restrict);
    GD_C_API int GD_listen(int, int);
    GD_C_API ssize_t GD_recv(int, void *, size_t, int);
    GD_C_API ssize_t GD_recvfrom(int, void *, size_t, int, struct sockaddr * __restrict, socklen_t * __restrict);
    GD_C_API ssize_t GD_recvmsg(int, struct msghdr *, int);
    GD_C_API ssize_t GD_send(int, const void *, size_t, int);
    GD_C_API ssize_t GD_sendmsg(int, const struct msghdr *, int);
    GD_C_API ssize_t GD_sendto(int, const void *, size_t, int, const struct sockaddr *, socklen_t);
    GD_C_API int GD_setsockopt(int, int, int, const void *, socklen_t);
    GD_C_API int GD_shutdown(int, int);
    GD_C_API int GD_sockatmark(int);
    GD_C_API int GD_socket(int, int, int);
    GD_C_API int GD_socketpair(int, int, int, int *);

#ifdef __cplusplus
}
#endif

#endif
