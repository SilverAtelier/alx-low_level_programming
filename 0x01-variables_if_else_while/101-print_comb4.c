#include <stdio.h>
/**
 * main - print combination of 3 digits
 * Return: always 0 is success
 */

int main(void)
{
	int s, m, l;

	for (l = '0'; l <= '9'; l++)
	{
		for (m = (l + 1); m <= '9'; m++)
		{
			for (s = (m + 1); s <= '9'; s++)
			{
				putchar(l);
				putchar(m);
				putchar(s);
				if (l != '7' || m != '8' || s != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
