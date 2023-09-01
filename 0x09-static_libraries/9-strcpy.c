#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int u = 0;
	int v = 0;

	while (*(src + u) != '\0')
	{
		u++;
	}
	for ( ; v < u ; v++)
	{
		dest[v] = src[v];
	}
	dest[u] = '\0';
	return (dest);
}
