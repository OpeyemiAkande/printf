%  _printf(3)
% Opeyemi Akande, Emmanuel Adebayo
% 19 April 2022

# NAME
_printf - sends the formatted input to the the stdout.

# SYNOPSIS
Simplified version of printf\
**int _printf(const char *format, ...);**

# DESCRIPTION
_printf is a function which produces output according to input or format. It cheks for formatters such as: "c", "s", "%", "d" and "i" and other primitive types.

# OPTIONS
No options. Flags and options are not needed

# EXAMPLES
#include "main.h"
_printf("Let's try to printf a simple sentence.\n");\
: To print a simple sentence to stdout followed by a new line

# Check out Betty for more info on the coding style employed:
https://github.com/holbertonschool/Betty/blob/master/betty-style.pl and https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl.
