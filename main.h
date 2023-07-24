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
int nprints_uint(unsigned int n);
int print_uint_helper(unsigned int n);
int print_uint(unsigned int n);
int print_base(unsigned int n, int b, int flag);

#endif /* #ifndef MAIN_H */
