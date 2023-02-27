#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: our test monkey
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
