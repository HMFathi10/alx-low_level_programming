#include "main.h"

/**
 * print_rev - Call printRec.
 * @s: is a string
 * Return: Void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
