#include "main.h"

int act_prime(int n, int i);

/**
 * is_prime_number - teel prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_prime(n, n - 1));
}

/**
 * act_prime - ant prime
 * @n: number
 * @i: iterator
 * Return: int
 */

int act_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (act_prime(n, i - 1));
}
