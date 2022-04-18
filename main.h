#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/* Main printf function */
int _printf(const char *format, ...);

/* Helper Functions */
int _putchar(char);
int print_conversion_element(char, va_list);
int print_char(va_list);
int print_str(va_list);
int print_unsigned(va_list);
int print_oct(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_hex_base(va_list arg, char _case);
int print_unsignedIntToHex(unsigned int num, char _case);
/* Struct to use to pair conversion specifiers to respective functions*/
/**
 * typedef struct conversions_functions
 * @specifier: conversion specifier to use 
 * @function: pointer to function to do the printing
 *
 */
typedef struct conversions_functions
{
	char *specifier;
	int (*function)(va_list);
} conversions_functions;
#endif
