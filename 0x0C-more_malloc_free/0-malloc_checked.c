#include "main.h"

/**
 * malloc_checked - create malloc.
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
