#include <string.h>
#include "main.h"

/**
 * *_strcat-concatenates 2 strings
 * @dest-var 1
 * @src-var 2
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
