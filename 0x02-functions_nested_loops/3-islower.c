#include"main.h"
/**
 * _islower-checks for lowercase
 * Return: Always 0 is success
 * @c:charcter input
 */
int _islower(int c)
{
	int letter;

	letter = 'a';

	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	return (0);
}
