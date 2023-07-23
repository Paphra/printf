#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - prints formatted output with some specifiers
 * @format: pointer to the only fixed string argument
 * Return: integer, number of bytes printed
 */

int _printf(const char *format, ...)
{
	int n_by = -1;
	va_list pt;

	if (format != NULL)
	{
		n_by = 0;
		va_start(pt, format);
		while (*format != '\0')
		{
			if (*format != '%')
				n_by += _putchar(*format);
			else
			{
				format++;
				switch (*format)
				{
				case 'c':
					n_by += _putchar((char)va_arg(pt, int));
					break;
				case 's':
					n_by += _puts(va_arg(pt, char *));
					break;
				case '%':
					n_by += _putchar('%');
					break;
				case 'i': case 'd':
					n_by += print_int(va_arg(pt, int));
					break;
				default:
					n_by = print_other(*(format), n_by);
					if (n_by == -1)
						return (n_by);
					break;
				}
			}
			format++;
		}
		va_end(pt);
	}
	return (n_by);
}
