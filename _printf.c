#include "main.h"

/**
 * _printf- Prints
 * @format: a character string
 *
 * Return: length of printed output
 */

int _printf(const char *format, ...)
{
	va_list var_list;
	int counter = 0;
	int len = 0;
	int looper;
	matcher_t func_list[] = {
		{'c', _printchar},
		{'s', _printstr},
		{'d', _printint},
		{'i', _printint},
	};

	va_start(var_list, format);


	while (format[counter])
	{
		if (format[counter] == '%')
		{
			for (looper = 0; looper < 4; looper++)
			{
				if (func_list[looper].c == format[counter + 1])
					func_list[looper].ptr(var_list);
			}
			if (format[counter + 1] == '%')
			{
				_putchar('%');
			}
			counter += 2;
			continue;
		}
		len++;
		_putchar(format[counter]);
		counter++;
	}
va_end(var_list);
return (len);
}
