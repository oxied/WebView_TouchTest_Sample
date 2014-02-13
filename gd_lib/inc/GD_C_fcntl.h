/*
 * (c) 2013 Good Technology Corporation. All rights reserved.
 */

#ifndef _GD_C_FCNTL_H_
#define _GD_C_FCNTL_H_

#include <fcntl.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef GD_C_API
# define GD_C_API
#endif
    
    GD_C_API int GD_fcntl(int, int, ...);
    
#ifdef __cplusplus
}
#endif

#endif
