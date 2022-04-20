#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char * const format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_int(va_list args);
int (*_select_func(char c))(va_list);

#endif /* _MAIN_H_ */
