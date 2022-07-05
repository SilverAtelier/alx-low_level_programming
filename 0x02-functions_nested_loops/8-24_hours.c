#include "main.h"
/**
 * jack_bauer-prints every minute of the day
 */
void jack_bauer(void)
{
	int hrs;
	int min;

	while (hrs < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min ++;
		}
		min = 0;
		hrs += 1;
	}
}
