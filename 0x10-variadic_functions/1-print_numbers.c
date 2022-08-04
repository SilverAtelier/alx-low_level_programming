#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers
 *@n:numbers
 *@separator:string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != n && separator != NULL)
			printf("%s", separator);
		}
		va_end(ap);
	}
	_putchar('\n');
}
