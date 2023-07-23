#include "main.h"

/**
 * nprints_int - counts the number of bytes printed
 * @n: the integer to print
 * Return: the number of bytes printed
 */
int nprints_int(int n)
{
	int count_neg = 0, rec_flag;
	unsigned int m;

	if (n > -10 && n < 10)
		rec_flag = 0;
	if (n >= 0)
		m = n;
	else
	{
		m = -1 * (unsigned int)(n + 1) + 1;
		n = -1;
		count_neg = 1;
	}
	if (m / 10)
	{
		rec_flag = 1;
		return (1 + nprints_int(m / 10) + count_neg);
	}

	if (rec_flag == 0)
		return (count_neg + 1);
	return (1);
}

/**
 * print_int_helper - actually prints the integer using recursion
 * @n: the integer to print
 * Return: 0, always
 */
int print_int_helper(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -1 * (unsigned int)(n + 1) + 1;
		n = -1;
		_putchar('-');
	}
	else
	{
		m = n;
	}

	if (m / 10)
		print_int_helper(m / 10);

	_putchar(m % 10 + '0');
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
