#include "main.h"

/**
 * clear_bit - set a bit at a given index to 0.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	if (*n & (1 << index))
		n ^= (1 << index);
	return (1);
}
