#include "mglibc.h"

void _start()
{
  mg_write(1, "Haaao, world!\n", 14);

  mg_exit(0);
}
