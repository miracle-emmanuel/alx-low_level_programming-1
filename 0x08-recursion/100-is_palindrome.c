#include "main.h"

int c_p(char *s, int i, int len);
int _str(char *s);

/**
 * is_pallindrone - if string is pallindrone
 * @s: string to reverse
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (c_p(s, 0, _str(s)));
}

/**
 * _str - len of str
 * @s: string
 * Return: len of str
 */

int _str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str(s + 1));
}

/**
 * c_p - check characters for pallindrome
 * @s: str
 * @i: iterator
 * @len: length of str
 * Return: 1 or 0
 */

int c_p(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (c_p(s, i + 1, len - 1));
}
