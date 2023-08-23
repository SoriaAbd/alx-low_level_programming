#include "main.h"
#include <string.h>
/**
 * *_strcat - function that concatenates two strings
 * @dest:frist string
 * @src:secnd string
 * Return:void
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
