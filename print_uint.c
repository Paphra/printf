#include "main.h"

/**
 * nprints_uint - counts the number of bytes printed
 * @n: the unsigned integer to be print
 * Return: the number of bytes printed
 */
int nprints_uint(unsigned int n)
{
	if (n / 10)
	{
		return (1 + nprints_uint(n / 10));
	}
	return (1);
}

/**
 * print_uint_helper - actually prints the integer using recursion
 * @n: the unsigned integer to print
 * Return: 0, always
 */
int print_uint_helper(unsigned int n)
{
	if (n / 10)
		print_uint_helper(n / 10);

	_putchar(n % 10 + '0');
	return (0);
}

/**
 * print_uint - prints an integer and returns the number of bytes printed
 * @n: the unsigned integer to print
 * Return: the number of bytes printed. Includes any negative sign.
 */
int print_uint(unsigned int n)
{
	print_uint_helper(n);
	return (nprints_uint(n));
}
