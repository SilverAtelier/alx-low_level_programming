#include <string.h>
#include "main.h"

/**
 * *_strcat-concatenates 2 strings
 * @*dest-var 1
 * @*dest-var 2
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{
	char val1[100], val2[100];

	val1[100] = *dest;
	val2[100] = *src;

	char s1[100] = val1[];
	char s2[100] = val2[];

	int len, j;

	while (s1[len] != '\0')
	{
		++len;
	}

	for (j = 0; s2[j] != '\0'; ++j, ++len)
	{
		s1[len] = s2[j];
		_putchar(s1[len]);
	}
	s1[len] = '\0';
	_putchar(s1[len]);

}
