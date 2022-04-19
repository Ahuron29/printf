#include <stdarg.h>
#include "main.h"

/**
 * print_char - print argument with type that matches specifier
 * @arg: argument to print
 *
 * Return:
 *	1 on success
 *	0 otherwise
 */

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
