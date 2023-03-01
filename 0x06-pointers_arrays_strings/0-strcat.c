#include "main.h"
#include <stdio.h>

/**
 * _strcat - conatenates two strings
 * @dest: str1
 * @src: str2
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int d, a;

	d = 0;
	while (dest[d])
	{
		d++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[d] = src[a];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
