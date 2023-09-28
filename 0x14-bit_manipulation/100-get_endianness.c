#include "main.h"

/**
 * get_endianness - check endianness.
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *c;

	c = (char *) &x;
	return ((int)*c);
}
