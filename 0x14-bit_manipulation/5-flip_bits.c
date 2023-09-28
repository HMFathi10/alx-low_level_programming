#include "main.h"

/**
 * flip_bits - Number of bits need to flip one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number, count = 0;

	number = n ^ m;
	while (number)
	{
		number & 1 ? count++ : count;
		number >>= 1;
	}
	return (count);
}
