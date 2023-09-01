#include "main.h"
#include <string.h>
/**
 * *_strstr - function that locates a substring.
 * @haystack:string
 * @needle:supstring
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);

	return (haystack);
}
