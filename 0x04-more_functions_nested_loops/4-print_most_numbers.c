#include "main.h"

/**
 * print_most_numbers - all numbers except 2 and 4
 * Return: output
 */
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		if (c == 4 || c == 2)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
		c++;
	}
	_putchar('\n');
}
