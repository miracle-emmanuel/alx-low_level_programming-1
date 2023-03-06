#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - point
 * @a: input
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int b, c, s1 = 0, s2 = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
		s1 = s1 + a[b];
	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
		s2 = s2 + a[c];
	printf("%d, %d\n", s1, s2);
}
