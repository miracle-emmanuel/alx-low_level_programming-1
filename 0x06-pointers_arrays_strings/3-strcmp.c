#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: str1
 * @s2: str2
 * Return: positve, zero, negative difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
