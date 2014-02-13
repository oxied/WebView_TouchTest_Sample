/*
 * (c) 2013 Good Technology Corporation. All rights reserved.
 */

#ifndef _GD_C_UNISTD_H_
#define _GD_C_UNISTD_H_

#include <unistd.h>
#include <sys/mount.h>

#ifdef __cplusplus
extern "C" {
#endif
    
#ifndef GD_C_API
# define GD_C_API
#endif

    GD_C_API int GD_UNISTD_open(const char* path, int mode, ...);
    GD_C_API int GD_UNISTD_close(int fd);
    GD_C_API ssize_t GD_UNISTD_read(int fd, void *buffer, size_t nbytes);
    GD_C_API ssize_t GD_UNISTD_write(int fd, const void *buffer, size_t nbytes);
    GD_C_API off_t GD_UNISTD_lseek(int fd, off_t offset, int whence);
    GD_C_API int GD_UNISTD_ftruncate(int fd, off_t length);
    GD_C_API int GD_UNISTD_truncate(const char* path, off_t length);
    GD_C_API int GD_UNISTD_fdatasync(int fd);
    GD_C_API int GD_UNISTD_fsync(int fd);
    GD_C_API int GD_UNISTD_fchown(int fd, uid_t owner, gid_t group);
    GD_C_API int GD_UNISTD_chown(const char* path, uid_t owner, gid_t group);
    GD_C_API int GD_UNISTD_lchown(const char* path, uid_t owner, gid_t group);
    GD_C_API int GD_UNISTD_chroot(const char* path);
    GD_C_API int GD_UNISTD_fchdir(int fd);
    GD_C_API int GD_UNISTD_chdir(const char* path);
    GD_C_API char* GD_UNISTD_getcwd(char *buf, size_t size);
    GD_C_API int GD_UNISTD_rmdir(const char* path);
    GD_C_API int GD_UNISTD_access(const char* path, int mode);
    GD_C_API long int GD_UNISTD_fpathconf(int fd, int name);
    GD_C_API long int GD_UNISTD_pathconf(const char* path, int name);
    GD_C_API int GD_UNISTD_lockf(int fd, int function, off_t size);
    GD_C_API char* GD_UNISTD_ttyname(int fd);
    GD_C_API int GD_UNISTD_ttyname_r(int fd, char* name, size_t namesize);
    GD_C_API int GD_UNISTD_pipe(int fds[2]);
    GD_C_API ssize_t GD_UNISTD_pread(int fd, void* buffer, size_t nbyte, off_t offset);
    GD_C_API ssize_t GD_UNISTD_pwrite(int fd, const void *buffer, size_t nbyte, off_t offset);
    GD_C_API int GD_UNISTD_dup(int oldd);
    GD_C_API int GD_UNISTD_dup2(int oldd, int newd);
    GD_C_API int GD_UNISTD_symlink(const char* file_path, const char* symlink_path);
    GD_C_API int GD_UNISTD_readlink(const char* path, char* buffer, size_t nbyte);
    GD_C_API int GD_UNISTD_link(const char* file_path, const char* link_path);
    GD_C_API int GD_UNISTD_unlink(const char* path);
    GD_C_API void* GD_UNISTD_mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
    GD_C_API int GD_UNISTD_munmap(void *addr, size_t length);
    GD_C_API int GD_UNISTD_fchmod(int fildes, mode_t mode);
    GD_C_API int GD_UNISTD_fstatfs(int fd, struct statfs *buf);

#ifdef __cplusplus
}
#endif

#endif
