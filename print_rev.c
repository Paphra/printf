#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns length of a string
 * @str: pointer to a string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * print_rev - print a string in reverse
 * @str: pointer to the string
 * Return: n bytes printed
 */

int print_rev(char *str)
{
	int len, n_by = 0, i;

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
	}

	len = _strlen(str);

	if (len == 0)
		return (0);

	for (i = len - 1; i >= 0; i--)
		n_by += _putchar(str[i]);
	return (n_by);
}
