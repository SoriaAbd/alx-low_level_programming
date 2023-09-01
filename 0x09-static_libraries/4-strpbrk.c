#include "main.h"
#include <string.h>
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s:string
 * @accept:string
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
