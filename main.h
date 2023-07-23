#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);

int nprints_int(int n);
int print_int_helper(int n);
int print_int(int n);
int print_other(va_list pt, char c, int curr_n_by);
int print_binary(unsigned int n);

#endif /* #ifndef MAIN_H */
