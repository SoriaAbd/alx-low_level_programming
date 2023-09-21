#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h:our pointer
 * Return:count of our elemnts
 * soria
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
