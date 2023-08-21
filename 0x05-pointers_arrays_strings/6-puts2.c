#include "main.h"
#include <string.h>
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int j;
	int len = (strlen(str)) - 1;

	for (j = 0 ; j <= len ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
