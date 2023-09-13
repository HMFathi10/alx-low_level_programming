#include "function_pointers.h"

/**
 * int_index - Print name.
 * @array: int
 * @size: int
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);

}
