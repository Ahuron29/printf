#include <stdarg.h>
#include "main.h"

/**
 * print_unsigned - print unsigned numbers
 * @arg: number to print
 *
 * Return:
 *	number of digits in arg
 *
 */

int print_unsigned(va_list arg)
{
	int divisor = 1, i, resp;
	unsigned int n = va_arg(arg, unsigned int);

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (i + 1);
}
