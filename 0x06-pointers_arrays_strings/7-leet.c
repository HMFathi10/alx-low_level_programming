#include "main.h"

/**
 * *leet - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *leet(char *s)
{
	char *sym = "aAeEoOtTlL";
	int eq[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int st = -1;
	int j = 0;

	while (s[++st] != '\0')
	{
		for (j = 0; j < 9; j++)
		{
			if (s[st] == sym[j])
			{
				s[st] = eq[j] + '0';
				break;
			}
		}
	}
	return (s);
}
