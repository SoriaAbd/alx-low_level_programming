#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, co = 0;
	unsigned long int cur;
	unsigned long int ex = n ^ m;

	for (x = 63 ; x >= 0 ; x--)
	{
		cur = ex >> x;
		if (cur & 1)
			co++;
	}

	return (co);
}
