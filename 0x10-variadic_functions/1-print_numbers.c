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

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%ud", va_arg(ap, int));
		printf('\n');
		if (separator != NULL)
		{
			printf("%s", separator);
			printf('\n');
		}
	}
	va_end(ap);
	printf('\n');
}
