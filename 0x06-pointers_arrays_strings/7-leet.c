#include "main.h"

/**
 * leet - turns  a string into 1337
 * @x: input
 * Return: value of x
 */

char *leet(char *x)
{
	int i, n;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (x[i] == a1[n])
			{
				x[i] = a2[n];
			}
		}
	}
	return (x);
}
