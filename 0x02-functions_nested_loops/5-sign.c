#include"main.h"
/**
 * print_sign-gives out the number of a sign as ouput
 * rt(Return)
 * Return:rt 1 & print + if n>0,rt 0 & print 0 if n==0,rn -1 & print '-' if n<0
 * @n:input character
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
