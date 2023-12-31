#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head:pointer to the frist node
 * Return:sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *swap = head;

	while (swap != NULL)
	{
		sum = sum + swap->n;
		swap = swap->next;
	}
	return (sum);
}
