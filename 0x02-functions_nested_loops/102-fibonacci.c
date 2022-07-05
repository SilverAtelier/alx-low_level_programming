#include <stdio.h>
/**
 *main-print first 50 fibonnacci numbers
 *Return: 0 is success
 */

int main(void)
{
	int cur, next, count, num, prev;

	cur = 1;
	prev = 0;
	count = 1;
	num = 50;
	while (count < 2)
	{
		printf("%d, %d, ", prev, cur);
		count++;
	}
	while (count <= num)
	{
		next = cur + prev;
		printf("%d, ", next);
		prev = cur;
		cur = next;
		count++;
	}
	return (0);
}
