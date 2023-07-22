#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 * Return: the number of bytes printed
 */
int _puts(char *str)
{
	int n_by = 0;

	while (str[n_by] != '\0')
	{
		_putchar(str[n_by]);
		n_by++;
	}
	return (n_by);
}
