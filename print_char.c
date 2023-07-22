#include "main.h"
/**
 * _printchar - prints a % in case of double %%
 * This is mainly to save a couple of lines
 * @fmt: pointer to current location
 * @current_n_by: number of bytes printed before now
 * Return: new number of bytes
 */
int print_char(char **fmt, int current_n_by)
{
	_putchar(**fmt);
	current_n_by += 1;
	return (current_n_by);
}
