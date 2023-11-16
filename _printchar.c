#include "main.h"

/**
 * _printchar- Prints characters
 * @var_list: Variadic list
 * Return: 1
 */

int _printchar(va_list var_list)
{
	char ch = va_arg(var_list, int);
	_putchar(ch);
	return (1);
}

