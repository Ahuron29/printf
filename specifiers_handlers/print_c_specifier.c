#include <stdarg.h>
#include "main.h"

/**
 * print_c_specifier - print argument with type that matches specifier
 * @elem: argument to print
 *
 * Return:
 *	1 on success
 *	0 otherwise
 */

int print_char(va_list elem)
{
	return(_putchar(va_arg(elem, int)));
}
