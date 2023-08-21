#include "main.h"

/**
 * print_rev - Call printRec.
 * @s: is a string
 * Return: Void
 */
void print_rev(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		if (*(s + 1) != 0)
			printRec(s + 1);
		_putchar(*(s));
		_putchar('\n');
	}
}
