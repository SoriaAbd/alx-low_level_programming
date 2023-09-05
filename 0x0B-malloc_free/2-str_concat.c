#include "main.h"
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1:string
 * @s2:string
 * Return:string
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	result = strcat(s1, s2);
	if (result == NULL)
		return (NULL);

	return (result);
}
