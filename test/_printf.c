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
			_select_func(format[i + 1])(args);
			i++;
			n_displayed++;
		}

		i++;
	}
	va_end(args);
	return (n_displayed);
}
