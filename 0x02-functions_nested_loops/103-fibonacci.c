#include<stdio.h>
/**
 * main-print fibo numbers
 * Return:0 is success
 */
int main(void)
{
	unsigned long int cur, sum, next, count, num, prev;

	cur = 1;
	prev = 0;
	count = 1;
	num = 4000000;
	while (count <= num)
	{
		next = cur + prev;
		printf("%ld", next);
		if ((next % 2) == 0)
		{
			sum += next;
		}
		prev = cur;
		cur = next;
		count++;
	}
	printf("%ld\n", sum);
	return (0);
}
