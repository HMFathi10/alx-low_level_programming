#include "main.h"

/**
 * *rot13 - Change string to uppercase
 * @s: is a string
 * Return: char
 */
char *rot13(char *s)
{
	char *sym = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *eq = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int st = -1;
	int j = 0;

	while (s[++st] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[st] == sym[j])
			{
				s[st] = eq[j];
				break;
			}
		}
	}
	return (s);
}
