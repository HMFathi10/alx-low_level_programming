#include "main.h"

/**
 * *_strpbrk - Find char.
 * @s: string
 * @accept: string
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
			if (*s == accept[i++])
				return (s);
		s++;
	}
	return (NULL);
}
