#include "main.h"

/**
 * *cap_string - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *cap_string(char *s)
{
	int start = -1;

	while (s[++start] != '\0')
	{
		if (s[start] == ' ' || s[start] == '\n' || s[start] == '.' || s[start] == '(' || s[start] == ')')
			if (s[start + 1] >= 'a' && s[start + 1] <= 'z')
				s[start + 1] = s[start + 1] - 32;
	}
	return (s);
}
