#include "main.h"

/**
 * *leet - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *leet(char *s)
{
	char *sym = "OL?EA??T";
	int st = 0;
	int j;

	while (s[st] != '\0')
	{
		for (j = 0; j < 7; j++)
		{
			if (s[st] == sym[j] || s[st] - 32 == sym[j])
			{
				s[st] = j + '0';
				break;
			}
		}
		st++;
	}
	return (s);
}
