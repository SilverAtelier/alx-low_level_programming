#include"main.h"
/**
 * _isalpha-checks the letter c if its lower
 * Return:1 if c is a letter 0 otherwise
 */

int _isalpha(int c)
{	int letter = c;

	if ((letter >='a' && letter <= 'z') || (letter >='A' && letter <= 'Z'))
	{
		return (1);
	}
	
	return (0);
}
