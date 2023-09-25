#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head:pointer to the frist node
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *swap;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		swap = (*head)->next;
		free(*head);
		*head = swap;
	}
	*head = NULL;
}
