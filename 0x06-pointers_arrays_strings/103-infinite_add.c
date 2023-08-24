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
	int i = -1;
	int j = -1;
	int rem = 0;
	int result = 0;

	while (n1[++i] != '\0');
	while (n2[++j] != '\0');
	if (i + 1 >= size_r || j + 1 >= size_r)
		return (0);
	for (; j && i; i--, j--, size_r--)
	{
		result = (n1[i - 1] - '0') + (n2[j - 1] - '0') + rem;
		r[size_r] = (result % 10) + '0';
		rem = result / 10;
	}
	while (i)
	{
		result = n1[--i] - '0' + rem;
		r[--size_r] = (result % 10) + '0';
		rem = result / 10;
	}
	while (j)
	{
		result = n2[--j] - '0' + rem;
		r[--size_r] = (result % 10) + '0';
		rem = result / 10;
	}
	if (rem && size_r >= 0)
	{
		r[--size_r] = (rem % 10) + '0';
		retunr (r + size_r);
	}
	if (rem && size_r < 0)
		return (0)
	return (r + size_r + 1);
}
