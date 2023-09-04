#include "main.h"

/**
 * *_strdup - Duplicate string.
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[size] = '\0';
	for (; size > 0; size--)
	{
		ptr[size - 1] = str[size - 1];
	}
	return (ptr);
}
