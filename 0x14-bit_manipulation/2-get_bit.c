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
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}
