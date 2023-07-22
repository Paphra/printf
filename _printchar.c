#include "main.h"
/**
 * _printpercent - prints a % in case of double %%
 * This is mainly to save a couple of lines
 * @fmt: pointer to current location
 */
int _printchar(char **fmt, int current_n_by)
{
    _putchar(**fmt);
    current_n_by += 1;
    return (current_n_by);
}
