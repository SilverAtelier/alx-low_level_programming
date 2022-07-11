#include "main.h"
#include <string.h>
/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s:string var
 */

void print_rev(char *s)
{
	int a, len;

	a = 0;

	len = strlen(*s);
	while (*s <= '\0')
	{
		*s++;
		if (*s = '\0')
		{
			while (a <= len)
			{
				_putchar(*s--);
			}
		}
	}
}
