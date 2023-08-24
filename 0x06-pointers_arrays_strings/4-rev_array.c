#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: array of integers
 * @n:number of integers
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i, swape;

	for (i = 0 ; i < n-- ; i++)
	{
		swape = a[i];
		a[i] = a[n];
		a[n] = swape;
	}
}
