#ifndef MAIN_H
#define MAIN_H

#define NULL ((void *)0)

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);
void print_nothing(void);
int print_int(int n);
int print_char(char **fmt, int current_n_by);

#endif /* MAIN_H */
