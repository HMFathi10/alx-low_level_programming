#include "main.h"

/**
 * set_bit - set a bit at a given index to 1.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
