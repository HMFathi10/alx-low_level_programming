#include "main.h"

/**
 * *str_concat - Concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size = 0;
	int size1 = 0;
	
	while (s1 != NULL && s1[size] != '\0')
		size++;
	while (s2 != NULL && s2[size1])
		size1++;
	ptr = malloc(size + size1 + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[size + size1] = '\0';
	for (; size1 >= 0; size1--)
	{
		if (size1 == 0)
		{
			for (; size > 0; size--)
				ptr[size - 1] = s1[size - 1];
			break;
		}
		ptr[size1 + size - 1] = s2[size1 - 1];
	}
	return (ptr);
}
