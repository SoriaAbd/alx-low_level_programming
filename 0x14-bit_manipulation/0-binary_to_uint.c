#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return:the converted number decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			number = number * 2 + (b[x] - '0');
			x++;
		}
		else
			return (0);
	}
	return (number);
}
