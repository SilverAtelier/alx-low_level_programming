#include <stdio.h>

/**
 * main - prints lowercase a-z except q and e
 * Return: Always 0 is success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar('\n');

	return (0);
}
