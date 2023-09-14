#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:number of parameter
 * @...:the parameter that we calcute the sum of it
 * Return:the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	va_start(a, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
