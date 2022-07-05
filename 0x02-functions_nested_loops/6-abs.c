#include "main.h"
/**
 * _abs-compute absolute value of integer
 * Return:-absolute value
 * @n:input character
 */
int _abs(int n)
{
	int num = n;

	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	return (0);
}
