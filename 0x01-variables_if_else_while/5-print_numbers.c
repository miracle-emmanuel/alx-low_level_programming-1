#include <stdio.h>
/**
 * main - printing digits
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
