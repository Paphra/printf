#include "main.h"

/**
 * nprints_int - counts the number of bytes printed
 * @n: the integer to print
 * Return: the number of bytes printed
 */
int nprints_int(int n)
{
	int count_neg = 0;

	if (n < 0)
	{
		n *= -1;
		count_neg = 1;
	}
	if (n / 10)
		return (1 + nprints_int(n / 10) + count_neg);

	return (1);
}

/**
 * print_int_helper - actually prints the integer using recursion
 * @n: the integer to print
 * Return: 0, always
 */
int print_int_helper(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n / 10)
		print_int(n / 10);

	_putchar(n % 10 + '0');
	return (0);
}

/**
 * print_int - prints an integer and returns the number of bytes printed
 * @n: the integer to print
 * Return: the number of bytes printed. Includes any negative sign.
 */
int print_int(int n)
{
	print_int_helper(n);
	return (nprints_int(n));
}
