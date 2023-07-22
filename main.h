#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);
void print_nothing(void);

/*Here is what I suggest considering the structure in _printf.c*/
int printint(va_list arg);
int printchar(char **fmt, int current_n_by);
int printstring(va_list arg);

#endif /* MAIN_H */
