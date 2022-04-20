#include "main.h"
#include <stdarg.h>

int _print_str(va_list args)
{
	int k = 0, n_displayed = 0;
	char *s = va_arg(args, char *);

	for (k = 0; s[k]; k++)
        {
		_putchar(s[k]);
		n_displayed++;
	}
	return (n_displayed);
}

