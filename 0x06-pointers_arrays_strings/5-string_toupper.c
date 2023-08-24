#include "main.h"

/**
 * *string_toupper - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *string_toupper(char *s)
{
	int start = -1;

	while (s[++start] != '\0')
	{
		if (s[start] >= 'a' && s[start] <= 'z')
			s[start] = s[start] - 32;
	}
	return (s);
}
