#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h:linked list pointer
 * Return:length of int linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
