#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int m, n, k;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			k = n * m;
			if (n == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
