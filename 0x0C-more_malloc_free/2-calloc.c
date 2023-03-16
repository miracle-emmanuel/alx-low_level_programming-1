#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory
 * @s: area for filling
 * @b: char to vopy
 * @n: number of copying times
 * Return: reults
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * _calloc - give memory for array
 * @nmemb: num of element in array
 * @size: size of element
 * Return: results
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
