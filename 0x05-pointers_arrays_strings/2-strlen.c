#include "main.h"
#include <string.h>

/**
 * _strlen-returns the length of a string.
 * Return:string length
 * @s:string input
 */

int _strlen(char *s)
{
	const char *mystr;
	int a;

	mystr = s;
	a = strlen(mystr);
	return (a);
}
