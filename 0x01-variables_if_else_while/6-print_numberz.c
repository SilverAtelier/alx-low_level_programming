#include <stdio.h>
/**
 * main - prints numbers
 * Return: ALways 0 is success
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
