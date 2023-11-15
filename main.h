#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char ch);
int _printchar(va_list var_list);
int _printstr(va_list var_list);
int _printint(va_list var_list);
struct matcher
{
	char c;
	int (*ptr)(va_list);
};
typedef struct matcher matcher_t;
#endif
