#include <stdio.h>

/**
 * print_array - print array
 * @a: array
 * @n: size
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
