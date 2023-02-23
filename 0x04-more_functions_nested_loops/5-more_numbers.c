#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 * Return: 0 to 14 printed 10 times
 */



void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			else
			{
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
