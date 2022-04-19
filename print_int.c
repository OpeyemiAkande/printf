#include "main.h"
#include <stdarg.h>

int print_int(args, int)
{
	int n = va_arg(args, int);

