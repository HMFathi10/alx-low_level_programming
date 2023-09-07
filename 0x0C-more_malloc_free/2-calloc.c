#include "main.h"

/**
 * *_calloc - reallocate array size.
 * @nmemb: int
 * @size: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (nmemb *= size; nmemb; nmemb--)
		ptr[nmemb - 1] = 0;
	return (ptr);
}
