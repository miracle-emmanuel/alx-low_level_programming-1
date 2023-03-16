#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - give memory using malloc
 * @b: num of bytes
 * Return: the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
