#include "main.h"
#include <stdlib.h>
/**
 * count - function count number of words
 * @str1:string
 * Return:int
 */

int count(char *str1)
{
	int i, j, x;

	j = x = 0;
	for (i = 0 ; str1[i] != '\0' ; i++)
	{
		if (str1[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			x++;
		}
	}
	return (x);
}
/**
 * strtow - function that splits a string into words.
 * @str:string
 * Return:pointer to an array of strings (words) or NULL
 */

char **strtow(char *str)
{
	char **m, *tmp;
	int i, j, len, words, c, start, end;

	j = len = c = 0;
	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				m[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	m[j] = NULL;

	return (m);
}
