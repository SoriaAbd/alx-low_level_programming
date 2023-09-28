#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n:first diget
 * @m:sec diget
 * Return:number with changes
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int xor_r = n ^ m;

	while (xor_r != 0)
	{
		c += xor_r & 1;
		xor_r >>= 1;
	}
	return (c);
}
