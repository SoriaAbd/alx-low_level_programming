#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * check_digit - check if the string is intger
 * @s:array of string
 * Return:0.
 */

int check_digit(char *s)
{
	unsigned int c;

	c = 0;
	while (c < strlen(s))
	{
		if (!isdigit(s[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - program that adds positive numbers.
 * @argv:array of argu
 * @argc:number of argu
 * Return:0.
 */

int main(int argc, char *argv[])
{
	int c, num, sum;

	sum = 0;
	c = 1;
	while (c < argc)
	{
		if (check_digit(argv[c]))
		{
			num = atoi(argv[c]);
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);

	return (0);
}
