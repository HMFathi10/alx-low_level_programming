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
	int i = 0, stlen = 0, selen = 0;

	for (; s1 != NULL && s1[stlen]; stlen++)
		;
	for (; s2 != NULL && s2[selen] && n--; selen++)
		;
	ptr = malloc(stlen + selen + 1);
	if (ptr == NULL)
		return (NULL);
	while ( s1 != NULL && *s1 && stlen--)
	{
		*(ptr + i) = *s1;
		s1++;
		i++;
	}
	while (s2 != NULL && *s2 && selen--)
	{
		*(ptr + i) = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
