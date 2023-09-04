#include "main.h"

/**
 * **alloc_grid - allocate grid with 0.
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = calloc(height, sizeof(int));
	for (; i < height; i++)
		ptr[i] = calloc(width, sizeof(int));
	ptr = calloc(width, sizeof(int));
	for (; i < width; i++)
		ptr[i] = calloc(height, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
