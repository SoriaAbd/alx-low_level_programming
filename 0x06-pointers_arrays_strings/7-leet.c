#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char str0[] = "aAeEoOtTlL";
	char str1[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == str0[j])
			{
				n[i] = str1[j];
			}
		}
	}
	return (n);
}
