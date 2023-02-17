#include <stdio.h>
/**
 * main - lower and uppercase letters
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	char u;

	a = 'a';
	u = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
