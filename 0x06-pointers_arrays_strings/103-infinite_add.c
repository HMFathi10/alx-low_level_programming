#include "main.h"

/**
 * *infinite_add - Change string to uppercase
 * @n1: is a string
 * @n2: is a string
 * #r: is a string
 * @size_r: is an integer
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int rem = 0;
	int result = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		result = (*n1 - '0') + (*n2 - '0') + rem;
		r[size_r] = (result % 10) + '0';
		rem = result / 10;
	}
	while (*n1)
	{
		result = (*n1 - '0') + rem;
		r[size_r--] = (result % 10) + '0';
		rem = result / 10;
		n1--;
	}
	while (*n2)
	{
		result = (*n2 - '0') + rem;
		r[size_r--] = (result % 10) + '0';
		rem = result / 10;
		n2--;
	}
	if (rem && size_r >= 0)
	{
		r[size_r] = (rem % 10) + '0';
		return (r + size_r);
	}
	if (rem && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
