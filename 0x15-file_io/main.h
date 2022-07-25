#ifndef _MAIN_H_
#define _MAIN_H_
/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/* write */
#include <unistd.h>

/* prototype */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
