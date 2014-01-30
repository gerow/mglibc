#include "mglibc.h"

mg_ssize_t
mg_write(int filedes, const void *buf, mg_size_t nbyte)
{
  int ret;

  /* 4 is the 32bit linux system call for write, so we place it in eax.
   * We place the file descripor in ebx, the pointer to the buffer into ecx
   * and place the size into edx
   */
  asm (
    "movl $4, %%eax\n\t"
    "int $0x80\n\t"
    : "=a" (ret)
    : "b" (filedes), "c" (buf), "d" (nbyte)
    : "%eax"
    );

  return ret;
}
