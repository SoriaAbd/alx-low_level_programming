#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 * @min:intger
 * @max:intger
 * Return:pointer to a new array
 */

int *array_range(int min, int max)
{
	int *p;
	int j, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (j = 0 ; min <= max ; j++)
		p[j] = min++;

	return (p);
}
