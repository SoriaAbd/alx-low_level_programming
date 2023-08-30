#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n:integer
 * Return:square root of a number
 */
int real_sqrt_recursion(int n, int j);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - help function
 * @n:intger
 * @j:intger
 * Return:square root of a number
 */

int real_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	else if (j * j == n)
		return (j);
	else
		return (real_sqrt_recursion(n, j + 1));
}
