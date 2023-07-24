#include "main.h"
#include <stdarg.h>

/**
 * print_other - prints % for %%, nothing for "% " and "%\0"
 * @pt: va_list from the _printf function to iterate to next argument
 * @c: character following %
 * @curr_n_by: number of bytes printed before now
 * Return: the updated number of bytes printed
 */
int print_other(va_list pt, char c, int curr_n_by)
{
	if (c == ' ' || c == '\0')
		curr_n_by = -1;
	else if (c == 'b')
		curr_n_by += print_base((unsigned int)va_arg(pt, int), 2, -1);
	else if (c == 'u')
		curr_n_by += print_uint((unsigned int)va_arg(pt, int));
	else if (c == 'o')
		curr_n_by += print_base((unsigned int)va_arg(pt, int), 8, -1);
	else if (c == 'x')
		curr_n_by += print_base((unsigned int)va_arg(pt, int), 16, 0);
	else if (c == 'X')
		curr_n_by += print_base((unsigned int)va_arg(pt, int), 16, 1);
	else
	{
		_putchar('%');
		_putchar(c);
		curr_n_by += 2;
	}

	return (curr_n_by);
}
