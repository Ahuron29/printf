#include <stdarg.h>
#include "main.h"

/**
 * print_str - prints string argument
 * @arg: argument to print
 *
 * Return:
 *	number of arg printed
 *
 */

int print_str(va_list arg)
{
	int i = 0; /* Loop condition */

	char *string = va_arg(arg, char*);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}

	return (i);
}

