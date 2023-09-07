#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1:frist string
 * @s2:second string
 * @n:number of bytes
 * Return:string of concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, l1, l2;

	i = j = l1 = l2 = 0;
	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < 2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!s3)
		return (NULL);
	while (i < l1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		s3[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		s3[i++] = s2[j++];
	s3[i] = '\0';

	return (s3);
}
