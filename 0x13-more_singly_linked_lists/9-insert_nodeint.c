#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head:pointer to the frist node
 * @idx:where we add the node
 * @n:the value of this node
 * Return:the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newnode;
	listint_t *swap = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (x = 0 ; swap && x < idx ; x++)
	{
		if (x == idx - 1)
		{
			newnode->next = swap->next;
			swap->next = newnode;
			return (newnode);
		}
		else
			swap = swap->next;
	}
	return (NULL);
}
