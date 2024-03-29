#ifndef _variadic_fun_
#define _variadic_fun_
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct vartype
	{
		char letter;
		void (*func)(va_list);
	}type;
#endif
