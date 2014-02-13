/*
 * (c) 2013 Good Technology Corporation. All rights reserved.
 */

#ifndef _GD_C_SYS_STAT_H_
#define _GD_C_SYS_STAT_H_

#include <sys/stat.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef GD_C_API
# define GD_C_API
#endif
    
    GD_C_API int GD_UNISTD_fstat(int fd, struct stat *s);

#ifdef __cplusplus
}
#endif

#endif
