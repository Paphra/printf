#include "main.h"
#include <stddef.h>
/**
 * _puts - prints a string, prints (null) for NULL str
 * @str: the string to print
 * Return: the number of bytes printed
 */
int _puts(char *str)
{
	int n_by = 0;

	if (str == NULL)
		str = "(null)";

	while (str[n_by] != '\0')
	{
		_putchar(str[n_by]);
		n_by++;
	}

	return (n_by);
}
