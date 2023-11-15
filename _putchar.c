#include "main.h"

/**
 * _putchar- Outputs characters
 * @ch: character
 * Return: 0
 */

int _putchar(char ch)
{
    	return (write(1, &ch, 1));
}
