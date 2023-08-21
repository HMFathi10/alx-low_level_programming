#include "main.h"

/**
 * rev_string - Reverse.
 * @s: is a string
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int size = 0;
	char temp;

	while (s[i] != 0)
		i++;
	size = i-- / 2;
	while (j < size)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[i - j++] = temp;
	}
}
