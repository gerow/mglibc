#include "mglibc.h"

void _start()
{
  mg_write(0, "Haaao, world!\n", 14);

  mg_exit(0);
}
