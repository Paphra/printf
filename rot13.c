#include "main.h"
#include <stddef.h>

/**
 * rot13 - encodes and prints in rot13
 * @str: pointer to a string
 * Return: number of bytes printed
 */

int rot13(char *str)
{
	char src[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char dest[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j, flag = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		flag = 0;
		for (j = 0; j <= 51; j++)
		{
			if (str[i] == src[j])
			{
				_putchar(dest[j]);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			_putchar(str[i]);
		i++;
	}

	return (i);
}
