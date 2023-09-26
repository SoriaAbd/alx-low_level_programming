#include "lists.h"
#include <stdio.h>
size_t loop(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * loop - help function
 * @head:pointer
 * Return:0 or number
 */
size_t loop(const listint_t *head)
{
	const listint_t *t, *h;
	size_t ns = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				ns++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				ns++;
				t = t->next;
			}
			return (ns);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head:pointer to frist node in linked list
 * Return:the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, i = 0;

	ns = loop(head);
	if (ns == 0)
	{
		for (; head != NULL ; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0 ; i < ns ; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (ns);
}
