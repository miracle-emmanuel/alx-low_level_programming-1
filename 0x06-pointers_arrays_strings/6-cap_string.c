#include "main.h"

/**
 * cap_string - capitalizes every string
 * @x: to be capped
 * Return: results
 */

char *cap_string(char *x)
{
	int i = 0;

	while (x[i])
	{
		while (!(x[i] >= 'a' && x[i] <= 'z'))
		{
			i++;
		}
		if (x[i - 1] == ' ' || x[i - 1] == '\t' || x[i - 1] == '\n')
			x[i] -= 32;
		else if (x[i - 1] == ',' || x[i - 1] == ';' || x[i - 1] == '.')
			x[i] -= 32;
		else if (x[i - 1] == '!' || x[i - 1] == '?' || x[i - 1] == '"')
			x[i] -= 32;
		else if (x[i - 1] == '{' || x[i - 1] == '}' || x[i - 1] == '(')
			x[i] -= 32;
		else if (x[i - 1] == ')' || i == 0)
			x[i] -= 32;
		i++;
	}
	return (x);
}
