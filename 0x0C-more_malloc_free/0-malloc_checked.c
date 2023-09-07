#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b:unsigned intger
 * Return:a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *loc;

	loc = malloc(b);
	if (loc == NULL)
		exit(98);

	return (loc);
}
