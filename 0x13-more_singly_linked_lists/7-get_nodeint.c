#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head:pointer to the frist node.
 * @index:where the new node will be
 * Return:returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *swap = head;

	while (swap && x < index)
	{
		swap = swap->next;
		x++;
	}
	return (swap ? swap : NULL);
}
