#include "main.h"

/**
 * *_strcpy - Reverse.
 * @dest: is a array
 * @src: is the size
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
