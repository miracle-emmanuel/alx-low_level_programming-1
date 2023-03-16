#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a meomry block
 * @ptr: pointer
 * @old_size: size of allocated memory
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	old_p = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = old_p[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = old_p[a];
	}
	free(ptr);
	return (p1);
}
