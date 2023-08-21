#include "main.h"

/**
 * print_rev - Call printRec.
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
	size = --i / 2;
	while (size--)
	{
		temp = s[j];
		s[j++] = s[i];
		s[i--] = temp;
	}
}
