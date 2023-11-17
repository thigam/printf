#include "main.h"

/**
 * _printbin - prints a  binary number.
 * @val: parameter.
 * Return: integer
 */
int _printbin(va_list var_list)
{
	int lag = 0;
	int number = 0;
	int i, z = 1, b;
	unsigned int num = va_arg(var_list, unsigned int);
	unsigned int n;

	for (i = 0; i < 32; i++)
	{
		n = ((z << (31 - i)) & num);
		if (n >> (31 - i))
			lag = 1;
		if (lag)
		{
			b = n >> (31 - i);
			_putchar(b + 48);
			number++;
		}
	}
	if (number == 0)
	{
		number++;
		_putchar('0');
	}
	return (number);
}
