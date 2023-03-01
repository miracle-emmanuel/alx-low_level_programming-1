#include "main.h"

/**
 * _strncat - another way to join two strings
 * @dest: str1
 * @src: str2
 * @n: number
 * Return: results
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[i++])
	{
		l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
