#include "main.h"

/**
 * *_strncat - Concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: is the number of char to concatenates
 * Return: char of concatenates
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && n--)
	{
		*(dest + i++) = *(src + j++);
	}
	return (dest);
}
