#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @m:the int to check
 * Return: the absolute value of int
 */

int _abs(int m)
{
	if (m >= 0)
	{
		return (m);
	}
	else
	{
		m = m * -1;
		return (m);
	}
}
