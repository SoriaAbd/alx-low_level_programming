#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:pointer
 * @old_size:size of ptr
 * @new_size:size of new memory block
 * Return:pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *old_p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		for (i = 0 ; i < new_size ; i++)
		{
			p[i] = old_p[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
		{
			p[i] = old_p[i];
		}
	}
	free(ptr);
	return (p);
}
