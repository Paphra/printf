#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef unsigned int ui;

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);

int nprints_int(int n);
int print_int_helper(int n);
int print_int(int n);
int print_other(va_list pt, const char *format, int c_by);
int print_binary(unsigned int n);
int nprints_uint(unsigned int n);
int print_uint_helper(unsigned int n);
int print_uint(unsigned int n);
int print_base(unsigned int n, int b, int flag);

int handle_S(char *str);
int print_hex(unsigned char i, int u);
int print_pointer(void *p);
int handle_flags(const char *f, unsigned int num);
int _isflag(char);

int _strlen(char *str);
int print_rev(char *str);
int rot13(char *str);

#endif /* #ifndef MAIN_H */
