#include <string.h>
#include "main.h"
/**
 * *_strncat-concatenates 2 strings
 * @dest:var 1
 * @src:var 2
 * @n:var integer
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0,i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
