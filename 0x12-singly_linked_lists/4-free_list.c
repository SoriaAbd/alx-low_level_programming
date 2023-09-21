#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @head:pointer to our list
 * Return:void
 * soria
 */

void free_list(list_t *head)
{
	list_t *s;

	while (head)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}
}
