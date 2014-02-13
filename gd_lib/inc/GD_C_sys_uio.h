/*
 * (c) 2013 Good Technology Corporation. All rights reserved.
 */

#ifndef _GD_C_SYS_UIO_H_
#define _GD_C_SYS_UIO_H_

#include <sys/uio.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef GD_C_API
# define GD_C_API
#endif
    
    GD_C_API ssize_t	GD_readv(int, const struct iovec *, int);
    GD_C_API ssize_t	GD_writev(int, const struct iovec *, int);

#ifdef __cplusplus
}
#endif

#endif
