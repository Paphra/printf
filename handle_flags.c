#include "main.h"

/**
 * _int - prints int given flags
 * @num: the number
 * @plus: + sign
 * @space: space
 * Return: num bytes
 */
int _int(int num, int plus, int space)
{
	int by = 0;

	if (plus && num >= 0)
		by += _putchar('+');
	else if (space && num >= 0)
		by += _putchar(' ');

	by += print_int(num);

	return (by);
}

/**
 * _oct - prints oct form given flag
 * @num: the number
 * @hash: the hash flag
 * Return: num bytes
 */
int _oct(unsigned int num, int hash)
{
	int by = 0;

	if (hash && num != 0)
		by += _putchar('0');
	by += print_base(num, 8, -1);
	return (by);
}

/**
 * _hex - prints a number in hex form given flag
 * @num: the number
 * @hash: the hash flag
 * Return: number of bytes
 */
int _hex(unsigned int num, int hash)
{
	int by = 0;

	if (hash && num != 0)
	{
		by += _putchar('0');
		by += _putchar('x');
	}
	by += print_base(num, 16, 0);

	return (by);
}

/**
 * handle_flags - handle all flags
 * @f: the current address in traversal of the format
 * @num: the current argument but when it is a number
 * Return: number of bytes printed
 */
int handle_flags(const char *f, unsigned int num)
{
	int plus = 0, space = 0, hash = 0;
	int n_by = 0;

	if (*f == '+')
		plus = 1;
	else if (*f == ' ')
		space = 1;
	else if (*f == '#')
		hash = 1;
	f++;
	if (*f == 'd')
		n_by += _int((int)num, plus, space);
	else if (*f == 'o')
		n_by += _oct(num, hash);
	else if (*f == 'x' || *f == 'X')
		n_by += _hex(num, hash);

	return (n_by);
}
