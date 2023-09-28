#include "main.h"

/**
 * flip_bits - Number of bits need to flip one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
