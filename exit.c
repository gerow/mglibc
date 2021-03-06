#include "mglibc.h"

void
mg_exit(int status)
{
  /*
   * 1 is the 32bit linux system call to exit, and we place
   * the status value in ebx
   */
  asm (
      "movl $1, %%eax\n\t"
      "int $0x80"
      : /* no output */
      : "b" (status)
      : "%eax", "%ebx"
  );
}
