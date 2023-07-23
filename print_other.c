#include "main.h"

/**
 * print_other - prints % for %%, nothing for "% " and "%\0"
 * @c: character following %
 * @curr_n_by: number of bytes printed before now
 * Return: the updated number of bytes printed
 */
int print_other(char c, int curr_n_by)
{
	if (c != ' ' && c != '\0')
	{
		_putchar('%');
		_putchar(c);
		curr_n_by += 2;
	}
	else
		curr_n_by = -1;

	return (curr_n_by);
}
