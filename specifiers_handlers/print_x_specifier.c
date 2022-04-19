#include "main.h"
#include <stdarg.h>

/**
 * print_hex - prints a hexadecimal in lower case
 * @arg: list that contains hexadecimal to print
 * Return: number of digits printed
 */

int print_hex(va_list arg)
{
	return (print_hex_base(arg, 'a'));
}
