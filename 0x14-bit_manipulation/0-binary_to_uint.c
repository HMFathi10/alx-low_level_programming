#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int.
 * @b: char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int power = 1, len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	while (b[--len])
	{
		if (b[len] == '1')
		{
			result += power;
		}
		else if (b[len] != '0')
			return (0);
		power *= 2;
	}
	return (result);
}
