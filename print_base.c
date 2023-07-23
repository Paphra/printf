#include "main.h"
#include "stdlib.h"
/**
 * print_base - prints unsigned integer to a given base representation
 * @n: unsigned integer to be printed
 * @b: the base to convert to
 * @flag: 0 for 16 %x, 1 for 16 %X, anything else for other bases, no problem
 * Return: the number of bytes printed
 */

int print_base(unsigned int n, int b, int flag)
{
	int n_by = 0, i, j = 0;
	unsigned int n_cpy = n;
	char *arr, hex[] = "0123456789abcdef", HEX[] = "0123456789ABCDEF";

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n_cpy > 0)
	{
		n_by++;
		n_cpy /= b;
	}
	arr = (char *)malloc((n_by + 1) * sizeof(char));
	if (arr == NULL)
		free(arr);
	else
	{
		for (i = n_by - 1; i >= 0; i--)
		{
			if (b == 16 && flag == 0)
				arr[i] = hex[n % b];
			else if (b == 16 && flag == 1)
				arr[i] = HEX[n % b];
			else
				arr[i] = (n % b) + '0';
			n /= b;
		}
		arr[n_by] = '\0';

		while (arr[j] != '\0')
		{
			_putchar(arr[j]);
			j++;
		}
		free(arr);
	}
	return (j);
}
