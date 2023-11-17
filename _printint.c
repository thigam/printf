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
	int counter_pow, last, digit, temp_numb, pow = 0, len = 0, exp = 1;

	if (numb < 0)
	{
		numb *= -1;
		_putchar(45);
	}
	if (numb == 0)
	{
		_putchar(48);
		return (1);
	}
	temp_numb = numb;
	while (temp_numb > 9)
	{
		temp_numb /= 10;
		pow++;
		exp *= 10;
	}
	temp_numb = numb;
	counter_pow = pow;
	for (; counter_pow > 0; counter_pow--)
	{
		temp_numb /= exp;
		digit = temp_numb % 10;
		len++;
		_putchar(digit + '0');
		temp_numb = numb;
		exp /= 10;
	}
	last = numb % 10;
	len++;
	_putchar(last + '0');
	return (len);
}
