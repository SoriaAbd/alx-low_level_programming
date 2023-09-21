#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:pointer to the first node in linked list
 * @str:string to add in linked list
 * Return:the address of the new element, or NULL if it failed
 * soria
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;/*new node*/
	unsigned int l = 0;/*length of string that we add in node*/

	while (str[l])
	{
		l++;
	}
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
