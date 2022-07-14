#include <string.h>
#include "main"

/**
 * *_strcat-concatenates 2 strings
 * @*dest:var 1
 * @*dest:var 2
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{
	char *result;

	*result = strcat(*dest, *src);

	return (*result);
}
