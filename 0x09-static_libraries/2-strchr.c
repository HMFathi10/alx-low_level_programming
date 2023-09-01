#include "main.h"

/**
 * *_strchr - Find char.
 * @s: array
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	for (; *s >= '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
