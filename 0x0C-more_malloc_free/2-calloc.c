#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb:unsigned int
 * @size:unsigned int
 * Return:pointer of alloctes memry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *col;

	if (nmemb == 0 || size == 0)
		return (NULL);

	col = malloc(nmemb * size);

	if (col == NULL)
		return (NULL);

	memset(col, 0, nmemb * size);

	return (col);
}
