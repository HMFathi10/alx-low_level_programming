#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1<<index))
		return (1);
	else
		return (0);
	return (-1);
}
