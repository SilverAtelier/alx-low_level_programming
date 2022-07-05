#include <stdio.h>
#include"main.h"
/**
 *main-print first 50 fibonnacci numbers
 *Return: 0 is success
 */

int main(void)
{
	int cur, next, count, num;
	cur = 0;
	next = 1;
	count = 1;
	num = 50;
	
	while (count < 2)
	{
		printf("%d ,%d \n", cur, next);
		count++;
	}
	while (count <= num)
	{
		next = add(cur, next);
		printf("%d, ", next);
		cur = next;
		next = next;
		count++;
	}
	return (0);
}
