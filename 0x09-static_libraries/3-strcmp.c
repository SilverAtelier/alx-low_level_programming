#include "main.h"
/**
 * *_strcmp- compares strings
 * @s1:string 1
 * @s2:string 2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, result;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	result = s1[count] - s2[count];
	return (result);
}
