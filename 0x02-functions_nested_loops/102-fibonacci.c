#include <stdio.h>
/**
 *main-print first 50 fibonnacci numbers
 *Return: 0 is success
 */

int main(void)
{
	unsigned long int cur, next, count, num, prev;

	cur = 1;
	prev = 0;
	count = 1;
	num = 50;
	while (count <= num)
	{
		next = cur + prev;
		printf("%ld, ", next);
		prev = cur;
		cur = next;
		count++;
	}
	return (0);
}
