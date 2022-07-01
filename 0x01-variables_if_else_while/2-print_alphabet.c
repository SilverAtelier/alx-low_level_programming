#include <stdio.h>

/**
 * main - print alphabets lowercase a-z
 * Return: Always 0 is success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
