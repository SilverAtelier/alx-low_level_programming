#include "main.h"
/**
 * tmes_table-prints the 9 times table
 */

void times_table(void)
{
	int columns, rows, result;
	for (rows = 0; row <= 9; row++)
	{
		for (columnn = 0; column <= 9; column++)
		{
			result = (row * column);

			if (column == 0)
			{
				_putchar('0' + result);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
