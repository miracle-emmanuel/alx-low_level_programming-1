#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - create array of int
 * @min: minimum values
 * @max: maximum values
 * Return: new array
 */

int *array_range(int min, int max)
{
	int *p;
	int a, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}
