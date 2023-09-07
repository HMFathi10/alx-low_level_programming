#include "main.h"

/**
 * *array_range - create array.
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
		ptr[i++] = min;
	return (ptr);
}
