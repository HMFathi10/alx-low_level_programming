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

	while (s[i] != 0)
		i++;
	char a[i - 1];
	while (i--)
	{
		j++;
		a[j] = s[i];
	}
	while (i < j)
	{
		i++;
		s[i] = a[i];
	}
}
