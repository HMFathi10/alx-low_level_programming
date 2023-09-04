#include "main.h"

/**
 * *create_array - create array of char.
 * @size: array size
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (; size > 0; size--)
	{
		ptr[size - 1] = c;
	}
	return (ptr);
}
