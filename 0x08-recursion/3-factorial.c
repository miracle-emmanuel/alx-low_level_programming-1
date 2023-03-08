#include "main.h"

/**
 * factorial - fact of any number
 * @n: number
 * Return: int
 */

int factorial(int n)
{
	int f;

	if (n <= 1)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	f = n * factorial(n - 1);
	return (f);
}
