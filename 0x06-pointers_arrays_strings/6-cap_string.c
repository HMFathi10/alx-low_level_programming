#include "main.h"

/**
 * *cap_string - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *cap_string(char *s)
{
	char sym[];
	sym = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
	int start = -1;
	int j = 0;

	while (s[++start] != '\0')
	{
		if ((s[start] >= 'a' && s[start] <= 'z') || (s[start] >= 'A' && s[start] <= 'Z'))
			continue;
		for (j = 0; j < 13; j++)
		{
			if (s[start] == sym[j])
			{
				if (s[start + 1] >= 'a' && s[start + 1] <= 'z')
				{
					s[start + 1] = s[start + 1] - 32;
					break;
				}
			}
		}
	}
	return (s);
}
