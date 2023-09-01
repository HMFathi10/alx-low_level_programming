#include "main.h"

/**
 * *_strncpy - Copy string to another string.
 * @dest: first string
 * @src: second string
 * @n: is the number of char to concatenates
 * Return: char of concatenates
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
