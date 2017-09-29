#ifndef ERROR_H
#define ERROR_H

/*
 * Shows an error message and exits the program with EXIT_FAILURE status.
 * Works similar to fprintf(stderr, fmt, ...);
 */
extern void error(const char *fmt, ...);

#endif /* ERROR_H */
