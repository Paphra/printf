#include "main.h"
#define NULL ((void *)0) /*Take this out to the main.h check it works*/
/**
 * _printf - prints formatted output with some specifiers
 * @format: pointer to the only fixed string argument
 * Return: integer, number of bytes printed
 */

int _printf(const char *format, ...)
{
	char **add_fmt = &format;
	int i = 0, n_by = 0;
	va_list pt;

	if (format != NULL)
	{
		va_start(pt, format);
		while (*format != '\0')
		{
			if (*format != '%')
				n_by = _printchar(add_fmt, n_by); /*made short for betty*/
			else
			{
				format++;
				switch (*format)
				{
				case 'c':
					n_by += printchar(va_arg(pt, int)); /*_putchar directly.*/
					break;
				case 's':
					n_by += _printstring(va_arg(pt, char *));
					break;
				case '%':
					_putchar('%');
					n_by += 1;
					break;
				case 'i': case 'd':
					_printint(va_arg(pt, int));
					break;
				default:
					format++; /*Tested on programmiz. it escapes undefined spec.*/
					break;
				}
			}
			format++;
		}
		va_end(pt);
	}
	return (n_by);
}
