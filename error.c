#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "error.h"

void error(const char *fmt, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	exit(EXIT_FAILURE);
}
