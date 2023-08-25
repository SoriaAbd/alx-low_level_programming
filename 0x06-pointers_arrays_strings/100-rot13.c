#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 * @m: pointer to string
 * Return:m
 */

char *rot13(char *m)
{
	int l, n;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0 ; m[l] != '\0' ; l++)
	{
		for (n = 0 ; n < 52 ; n++)
		{
			if (m[l] == data[n])
			{
				m[l] = datarot13[n];
				break;
			}
		}
	}
	return (m);
}
