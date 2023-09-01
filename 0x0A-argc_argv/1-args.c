#include <stdio.h>
/**
 * main - program that prints the number of
 * arguments passed into it.
 * @argc:number of argu
 * @argv:array of argu
 * Return:Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	/* ignore that array*/
	printf("%d\n", argc - 1);
	return (0);
}
