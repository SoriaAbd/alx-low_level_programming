#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head:pointer to the frist node
 * Return:void
 */

void free_listint(listint_t *head)
{
	listint_t *swap;

	while (head != NULL)
	{
		swap = head->next;
		free(head);
		head = swap;
	}
}
