#include "main.h"
/**
 * print_times_table-print multiplication table
 * 
 */
void print_times_table(int n)
{
	int rows, columns,result;

	if (n >= 0; && n <= 15)
	{
		for (rows = 0; rows <= n; row++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				result = columns * rows;
				if (columns == 0)
					_putchar('0' + result);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else if (result >= 100)
					{
						_putchar('0' + (result / 100));
						_putchar('0' + ((result / 10) % 10));
						_putchar('0' + (result % 10));
					}
				}
			}
		}
	}
}	
