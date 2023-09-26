#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h:pointer to the frist node in linked list
 * Return:the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int x;
	listint_t *swap;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			swap = (*h)->next;
			free(*h);
			*h = swap;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
