#include "main.h"

/**
 * *_realloc - concat two strings.
 * @ptr: void
 * @old_size: int
 * @new_size: int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
