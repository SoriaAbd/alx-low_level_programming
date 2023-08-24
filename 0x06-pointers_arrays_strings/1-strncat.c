#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n:integer
 * Return:void
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
