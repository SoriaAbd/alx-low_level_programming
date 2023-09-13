#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the opcodes of its own main function.
 * @argc:number of argu
 * @argv:array of argu
 * Return:0
 */

int main(int argc, char *argv[])
{
	int n_bytes, i;
	char *r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	r = (char *)main;
	for (i = 0 ; i < n_bytes ; i++)
	{
		if (i == n_bytes - 1)
		{
			printf("%02hhx\n", r[i]);
			break;
		}
		printf("%02hhx ", r[i]);
	}
	return (0);
}
