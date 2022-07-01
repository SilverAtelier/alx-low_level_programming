#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * Return: Always 0 is success
 */

int main(void)
{
	int n = '0';
	int alpha = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);

}
