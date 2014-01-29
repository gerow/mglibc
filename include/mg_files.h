#ifndef MG_FILES_H_
#define MG_FILES_H_

#include "mg_types.h"

mg_ssize_t
mg_write(int filedes, const void *buf, mg_size_t nbyte);

#endif /* MG_FILES_H_ */