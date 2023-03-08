#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - natural square root
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - cal squreroot
 * @n: var
 * @i: iterate number
 * Return: int
 */

int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (_sqrt(n, i + 1));
}
