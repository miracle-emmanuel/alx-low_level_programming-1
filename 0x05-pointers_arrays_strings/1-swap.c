#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a: first num
 * @b: second num
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
