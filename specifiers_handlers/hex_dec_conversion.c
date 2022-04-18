#include "main.h"
#include <stdarg.h>

/**
 * print_hex_base - base function for printing hexadecimal numbers
 * @arg: argument list containing hexadecimal
 * @_case: a  in caps on lower, printing the hex number in caps in lower
 * Return: number of digits printed
 */

int print_hex_base(va_list arg, char _case)
{
  unsigned int num = va_arg(arg, unsigned int);
  int nbrCharacters;

  if (num == 0)
    return (_putchar('0'));
  nbrCharacters = print_unsignedIntToHex(num, _case);

  return (nbrCharacters);
}
