#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a listint_t linked list.
 *@head:pointer to frist node
 *Return:the head node’s data (n).
 *if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *swap;
	int number;

	if (head != NULL || *head != NULL)
		return (0);

	number = (*head)->n;
	swap = (*head)->next;
	free(*head);
	*head = swap;

	return (number);
}
