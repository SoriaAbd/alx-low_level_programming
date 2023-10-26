#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Return:void
 */
void print_binary(unsigned long int n)
{
	int x, co = 0;
	unsigned long int cur;

	for (x = 63; x >= 0; x--)
	{
		cur = n >> x;

		if (cur & 1)
		{
			_putchar('1');
			co++;
		}
		else if (co)
			_putchar('0');
	}

	if (!co)
		_putchar('0');
}
