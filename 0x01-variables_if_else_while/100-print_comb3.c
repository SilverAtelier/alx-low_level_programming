#include <stdio.h>
/**
 * main - 0 to 99 output 
 * Return: Always 0 is success
 */

int main(void)
{
	int small;
	int large;

	for (large = '0'; large <= '9'; large++)
	{
		for (small = (large + 1); small <= '9'; small++)
		{
			putchar(large);
			putchar(small);
			
			if (large != '8' || small != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
