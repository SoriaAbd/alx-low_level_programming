#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc:number of arg
 * @argv:array of arg
 * Return:0
 */
int main(int argc, char *argv[])
{
	int number, i, n_of_coin;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Erorr\n");
		return (1);
	}
	number = atoi(argv[1]);
	n_of_coin = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0 ; i < 5 && number >= 0 ; i++)
	{
		while (number >= coins[i])
		{
			n_of_coin++;
			number -= coins[i];
		}
	}
	printf("%d\n", n_of_coin);
	return (0);
}
