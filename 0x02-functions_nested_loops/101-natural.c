#include <stdio.h>
/**
 * main-start of program
 * Return:0 is success
 */

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0)
		{
			sum += num;
		}
		else if ((num % 5) == 0)
		{
			sum += num;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
