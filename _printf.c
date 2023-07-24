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
				if (*format == 'c')
					n_by += _putchar((char)va_arg(pt, int));
				else if (*format ==  's')
					n_by += _puts(va_arg(pt, char *));
				else if (*format == 'S')
					n_by += _handle_S(va_arg(pt, char *));
				else if (*format == '%')
					n_by += _putchar('%');
				else if (*format == 'i' || *format == 'd')
					n_by += print_int(va_arg(pt, int));
				else
				{
					n_by = print_other(pt, *(format), n_by);
					if (n_by == -1)
						return (n_by);
				}
			}
			format++;
		}
		va_end(pt);
	}
	return (n_by);
}
