#include "main.h"
#include <string.h>
/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s:string var
 */

void print_rev(char *s)
{
	int a, len;
	char strng;

	a = 0;

	len = strlen(s);
	while (*s <= '\0')
	{
		strng = (*s++);
		if (strng = '\0')
		{
			while (a <= len)
			{
				strng = (*s--);
				_putchar(strng--);
			}
		}
	}
}
