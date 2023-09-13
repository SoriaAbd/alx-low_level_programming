#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - print the result of operations
 * @argc:number of argu
 * @argv:array of argu
 * Return:0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	operation = argv[2];
	n2 = atoi(argv[3]);
	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operation == '/' && n2 == 0) || (*operation == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operation)(n1, n2));
	return (0);

}
