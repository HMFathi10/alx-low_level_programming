#include "main.h"

/**
 * *_memset - Fills memory.
 * @s: array
 * @b: char
 * @n: size
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = -1;

	while (++i < n)
	{
		s[i] = b;
	}
	return (s);
}
