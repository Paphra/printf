#include "main.h"

/**
 * print_binary - prints a decimal in binary format
 * @n: an unsigned integer
 * Return: number of bytes printed
 */

int print_binary(unsigned int n)
{
	int bits = sizeof(unsigned int) * 8;
	int found_first_one = 0, i, n_by = 0;
	unsigned int mask;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = bits - 1; i >= 0; --i)
	{
		mask = 1u << i;

		if (n & mask)
		{
			_putchar('1');
			found_first_one = 1;
			n_by += 1;
		}
		else
		{
			if (found_first_one)
			{
				_putchar('0');
				n_by += 1;
			}
		}
	}
	return (n_by);
}
