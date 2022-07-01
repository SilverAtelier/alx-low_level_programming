#include <stdio.h>
/**
 * main-prints all possible different combinations of two digits
 * Return:Always 0 is success
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
	putchar('\n');
	return (0);
}
