#include "main.h"

/**
 * print_hex - prints HEX in uppercase
 * @c: the charater
 * @u: upper case = 1, else 0;
 * Return: number of bytes printed
 */
int print_hex(unsigned char c, int u)
{
	int nb = 0;
	char *hex = "0123456789abcdef";
	char *hexU = "0123456789ABCDEF";

	if (u == 1)
	{
		nb += _putchar(hexU[(c >> 4) & 0x0F]);
		nb += _putchar(hexU[c & 0x0F]);
	} else
	{
		nb += _putchar(hex[(c >> 4) & 0x0F]);
		nb += _putchar(hex[c & 0x0F]);
	}
	return (nb);
}
