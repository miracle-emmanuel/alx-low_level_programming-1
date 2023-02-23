#include "main.h"

/**
 * more_numbers - print 0 to 14
 * Description: 0 to 14 10 times
 * Return: 0 to 14 printed 10 times
 */
void more_numbers(void)
{
	int a = 0, b = 0;

	for (; a <= 10; a++)
	{
		for (; b <= 14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
