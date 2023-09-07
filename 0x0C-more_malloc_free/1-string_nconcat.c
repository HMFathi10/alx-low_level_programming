#include "main.h"

/**
 * *string_nconcat - concat two strings.
 * @s1: char
 * @s2: char
 * @n: int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(*s1) + n);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		*(ptr + i) = *s1;
		s1++;
		i++;
	}
	while (n && *s2)
	{
		*(ptr + i) = *s2;
		s2++;
		i++;
	}
	return (ptr);
}
