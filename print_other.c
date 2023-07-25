#include "main.h"
#include <stdarg.h>

/**
 * _isflag - check whether a char is a flag
 * @c: the char
 * Return: 1 - if true, else 0
 */
int _isflag(char c)
{
	if (c == '+' || c == '0' || c == ' ' || c == '#')
		return (1);
	return (0);
}

/**
 * print_other - prints % for %%, nothing for "% " and "%\0"
 * @pt: va_list from the _printf function to iterate to next argument
 * @format: current address in the format
 * @c_by: number of bytes printed before now
 * Return: the updated number of bytes printed
 */
int print_other(va_list pt, const char *format, int c_by)
{
	if (*format == '\0')
		c_by = -1;
	else if (*format == 'i' || *format == 'd')
		c_by += print_int(va_arg(pt, int));
	else if (*format == 'b')
		c_by += print_base((ui)va_arg(pt, int), 2, -1);
	else if (*format == 'u')
		c_by += print_uint((ui)va_arg(pt, int));
	else if (*format == 'o')
		c_by += print_base((ui)va_arg(pt, int), 8, -1);
	else if (*format == 'x')
		c_by += print_base((ui)va_arg(pt, int), 16, 0);
	else if (*format == 'X')
		c_by += print_base((ui)va_arg(pt, int), 16, 1);
	else if (*format == 'r')
		c_by += print_rev(va_arg(pt, char *));
	else if (_isflag(*format))
	{
		c_by += handle_flags(format, (ui)va_arg(pt, int));
		format++;
	}
	else
	{
		_putchar('%');
		_putchar(*format);
		c_by += 2;
	}

	return (c_by);
}
