#include <stdio.h>
/**
 * main - output reversed alphabet
 * Return : Always 0 is success
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
