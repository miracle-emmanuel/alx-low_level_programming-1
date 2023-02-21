#include "main.h"

/**
 * print_sign - sign of characters
 * @n: to be checked
 * Return: 1 if greater than '0' or 0 if '0' or -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
