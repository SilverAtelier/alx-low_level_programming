#include"main.h"
/**
 * print_sign-gives out the number of a sign as ouput
 * Return: 1 and prints + if n is greater than zero,returns 0 and prints 0 if n is zero,returns -1 and prints - if n is less than zero
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
