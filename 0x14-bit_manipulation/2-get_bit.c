#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index < 64)
		return (0);
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
