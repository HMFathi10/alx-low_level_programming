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

	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
