#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * Author: Opeyemi Akande
 * Contributor: Adebayo Emmanuel
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, n_displayed = 0, k = 0, num = 0;
	char *s = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed += 1;
		}
		else 
		{
			if (format[i + 1] == 'c')
			{
				/* call print_char */
				print_char(va_arg(args, int));
				n_displayed += 1;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				/* call print_str */
				s = va_arg(args, char *);
				print_str(s);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				/* call print_char */
				_putchar('%'));
				n_displayed += 1;
				i++;
			}
			else if (format[i + 1] == 'd')
			{
				/* call print_int(num) */
				i++;
				num = va_arg(args, int);

				while (num > 0)
				{
					_putchar('0' + (num % 10));
					num /= 10;
					n_displayed++;
				}
			}
		}

		i++;
	}
	va_end(args);
	return (n_displayed);
}
