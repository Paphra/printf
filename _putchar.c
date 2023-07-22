#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1 as length of printed char.
 * On error, 0 is returned, because no chars printed
 */
int _putchar(char c)
{
	int ret = write(1, &c, 1);

	if (ret == 1)
		return (1);
	return (0);
}
