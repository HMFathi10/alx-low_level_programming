#include "main.h"

/**
 * *_memcpy - Copy memory.
 * @dest: array
 * @src: array
 * @n: size
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
