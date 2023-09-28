#include "main.h"

/**
 * clear_bit - set a bit at a given index to 0.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;
	if (index > 63)
		return (-1);
	number = 1 << index;
	if (*n & number)
		*n ^= m;
	return (1);
}
