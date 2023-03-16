#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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
