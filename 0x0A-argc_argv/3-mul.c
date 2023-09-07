#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc:number of arg
 * @argv:array of arg
 * Return:0 or 1 error
 */
int main(int argc, char *argv[])
{
	int r, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = (int)argv[1];
	n2 = (int)argv[2];

	r = n1 * n2;
	printf("%d\n", r);
	return (0);
}
