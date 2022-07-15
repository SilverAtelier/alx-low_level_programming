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
	const char *val, *val1, *val2;

	val1 = *dest;
	val2 = *src;

	val = strcat(val1, val2);

	return (val);
}
