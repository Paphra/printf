#include "main.h"
#include <stddef.h>

/**
 * print_pointer - handles printing a pointer
 * @p: pointer
 * Return: number of bytes printed
 */
int print_pointer(void *p)
{
	int i;
	int n_by = 0;
	unsigned char *ptr;

	if (p != NULL)
	{
		ptr = (unsigned char *) &p;

		n_by += _putchar('0');
		n_by += _putchar('x');

		for (i = sizeof(void *) - 3; i >= 0; i--)
			n_by += print_hex(ptr[i], 0);
	} else
	{
		n_by += _puts("(nil)");
	}
	return (n_by);
}
