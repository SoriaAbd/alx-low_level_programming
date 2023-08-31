#include "main.h"
int real_prime_number(int n, int j);
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n:intger
 * Return:1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}

/**
 * real_prime_number - help function to make prime number
 * @n:intger
 * @j:intger
 * Return:1 if the input integer is a prime number, otherwise return 0.
 */

int real_prime_number(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (real_prime_number(n, j - 1));
}
