#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac:int
 * @av:char
 * Return:Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i, j, x, m;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = m = 0;
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
			x++;
	}
	x += ac;
	s = malloc(sizeof(char) * x + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] ; j++)
		{
			s[m] = av[i][j];
			m++;
		}
		if (s[m] == '\0')
			s[m++] = '\n';
	}
	return (s);
}
