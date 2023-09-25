#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a listint_t linked list.
 * @head:pointer to the frist node
 * @index:the index of the node that should be deleted.
 * Return:1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *swap = *head;
	listint_t *now = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(swap);
		return (1);
	}
	for (; x < index - 1 ; x++)
	{
		if (!swap || !(swap->next))
			return (-1);
		swap = swap->next;
	}
	now = swap->next;
	swap->next = now->next;
	free(now);
	return (1);
}
