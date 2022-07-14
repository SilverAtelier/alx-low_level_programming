#include <string.h>
#include "main.h"
/**
 * *_strncat-concatenates 2 strings
 * @*dest:var 1
 * @*src:var 2
 * @n:var integer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result;

	*result = strcat(*dest, *src);
}
