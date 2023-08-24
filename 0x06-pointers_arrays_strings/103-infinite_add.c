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
	while (i || j)
	{
		if (i > 0 && j > 0)
		{
			result = (n1[i - 1] - '0') + (n2 [j - 1] - '0') + rem;
			r[--size_r] = (result % 10) + '0';
			rem = result / 10;
			i--;
			j--;
		}
		else
			break;
		if (size_r <= 0 && i && j)
			return (0);
	}
	while (i)
	{
		result = n1[i - 1] - '0' + rem;
		r[--size_r] = (result % 10) + '0';
		rem = result / 10;
		i--;
		if (size_r <= 0 && i)
			return (0);
	}
	while (j)
	{
		result = n2[j - 1] - '0' + rem;
		r[--size_r] = (result % 10) + '0';
		rem = result / 10;
		j--;
		if (size_r <= 0 && j)
			return (0);
	}
	if (rem)
	{
		r[--size_r] = (rem % 10) + '0';
		rem /= 10;
		if (size_r <= 0 && j)
			return (0);
	}
	r = &r[size_r];
	return (r);
}
