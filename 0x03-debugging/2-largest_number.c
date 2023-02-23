#include "main.h"

/**
 * largest_number - returns the largest of 3  numbers
 * @a: num1
 * @b: num2
 * @c: num3
 * Return: largest num
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
