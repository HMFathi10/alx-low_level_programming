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
	char *a;

	while (s[i] != 0)
		i++;
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
