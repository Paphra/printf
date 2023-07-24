#include "main.h"

/**
 * _isprintable - checkes whether a given charcter is printable
 * @c: in int form
 * Return: 1 - if printable otherwise 0
 */
int _isprintable(int c)
{
	return (c >= 32 && c <= 126);
}

/**
 * _print_hex - prints non-printable chars
 * @c: char in int form
 * Return: number of bytes printed
 */
int _print_hex(unsigned char c)
{
	int nb = 0;

	nb += _putchar('\\');
	nb += _putchar('x');
	nb += print_hex(c, 1);

	return (nb);
}
/**
 * handle_S - handles custom conversion specifier
 * @str: the string
 *
 * Description: handles for non-printable chars
 * Return: num of bytes printed
 */
int handle_S(char *str)
{
	char *c;
	int n_by = 0;

	for (c = str; *c != '\0'; c++)
	{
		if (_isprintable((unsigned char)*c))
			n_by += _putchar(*c);
		else
			n_by += _print_hex((unsigned char)*c);
	}

	return (n_by);
}
