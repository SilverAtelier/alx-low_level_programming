#include"main.h"
/**
 * _islower-checks for lowercase
 * Return: Always 0 is success
 */
int _islower(int c)
{
	int letter = c;

	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	
	return (0);
}
