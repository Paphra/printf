#include "main.h"
#include <stdarg.h>

/**
 * print_other - prints % for %%, nothing for "% " and "%\0"
 * @c: character following %
 * @curr_n_by: number of bytes printed before now
 * Return: the updated number of bytes printed
 */
int print_other(va_list pt, char c, int curr_n_by)
{
	unsigned int n;

	if (c == ' ' || c == '\0')
	{
		curr_n_by = -1;
	}
	/*Add more cases here*/
	else if (c == 'b')
	{
		n = (unsigned int)va_arg(pt, int);
		curr_n_by += print_binary(n);
	}
	else
	{
		_putchar('%');
		_putchar(c);
		curr_n_by += 2;
	}

	return (curr_n_by);
}
