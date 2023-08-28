#include "main.h"

/**
 * *_strchr - Find char.
 * @s: array
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (null);
}
