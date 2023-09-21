#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:pointer to the frist node
 * @str:that is string to add at the end of linked list
 * Return:the address of the new element, or NULL if it failed
 * soria
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;/*new node element*/
	list_t *swap = *head;/*variable to make swap at the end of linked list*/
	unsigned int l = 0;/*length of string*/

	while (str[l] != '\0')
		l++;
	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (swap->next != NULL)
		swap = swap->next;
	swap->next = n;

	return (n);
}
