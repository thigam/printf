#include "main.h"

/**
 * _printstr- Prints a string
 * @var_list: a variadic list
 * Return: length of string
 */

int _printstr(va_list var_list)
{
	int counter = 0;
	char *string = va_arg(var_list, char *);

	while (string[counter])
	{
    	_putchar(string[counter]);
    	counter++;
	}
	return (0);
}
