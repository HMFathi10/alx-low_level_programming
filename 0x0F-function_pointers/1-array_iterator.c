#include "function_pointers.h"

/**
 * array_iterator - Print name.
 * @array: int
 * @size: int
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	if (array && action && size)
		action(*(array));
	if (*(array + 1))
		array_iterator((array + 1), size - 1, action);
}
