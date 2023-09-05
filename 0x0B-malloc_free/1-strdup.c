#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * @str:string
 * Return:Always 0 (Sussec)
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (; str[j] ; j++)
		s[j] = str[j];

	return (s);
}
