#include"main.h"
/**
 * main-start of program
 * Return: Always 0 is success
 */
int _islower(int c)
{
	int letter = c;

	if (letter >= 'a' && <= 'z')
	{
		return (1);
	}
	
	return (0);
}
