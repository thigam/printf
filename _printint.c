#include "main.h"

/**
 * _printint- Prints integer
 * @var_list: A variadic list
 *
 * Return: length of the string
 */

int _printint(va_list var_list)
{
	int numb = va_arg(var_list, int);
	int counter_pow, last, temp_pow, digit, temp_numb, pow = 0, len = 0;

	if (numb < 0)
	{
		numb *= -1;
		_putchar(45);
	}
	temp_numb = numb;
	while (temp_numb > 9)
	{
		temp_numb /= 10;
		pow++;
	}
	temp_numb = numb;
	temp_pow = pow;
	counter_pow = pow;
	for (; counter_pow > 0; counter_pow--)
	{
		for (; temp_pow > 0; temp_pow--)
		{
			temp_numb /= 10;
		}
		digit = temp_numb % 10;
		len++;
		_putchar(digit + '0');
		temp_pow = pow - 1;
		temp_numb = numb;
	}
	last = numb % 10;
	len++;
	_putchar(last + '0');
	return (len);
}
