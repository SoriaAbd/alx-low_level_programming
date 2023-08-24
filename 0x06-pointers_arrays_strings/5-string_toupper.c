#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @str:string
 * Return:string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
