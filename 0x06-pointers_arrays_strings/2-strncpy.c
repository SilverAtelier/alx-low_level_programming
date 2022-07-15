#include "main.h"
#include <string.h>
/**
 * *strncpy-copies a string.
 * @dest:var 1
 * @src:var 2
 * @n: int var
 */

char *_strncpy(char *dest, char *src, int n)
{
    char *result;

    result = strcpy(*dest, *src, n);
    return (result);
}