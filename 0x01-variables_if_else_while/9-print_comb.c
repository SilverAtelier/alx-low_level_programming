#include <stdio.h>
/**
 * main - outputs 0,1,2....7,8,9
 * Return: Always 0 is success
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
