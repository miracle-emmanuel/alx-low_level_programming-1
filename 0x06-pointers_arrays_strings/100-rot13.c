#include "main.h"
#include <stdio.h>

/**
 * rot13 - to make the code
 * @c: our var
 * Return: result
 */

char *rot13(char *c)
{
	int i;
	int j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == d1[j])
			{
				c[i] = d2[j];
				break;
			}
		}
	}
	return (c);
}
