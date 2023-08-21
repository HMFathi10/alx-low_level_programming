#include "main.h"

/**
 * print_rev - Call printRec.
 * @s: is a string
 * Return: Void
 * printRec - Pritn string
 */
void printRec(char *s)
{
	if (*(s + 1) != 0)
		printRec(s + 1);
	_putchar(*(s));
}

void print_rev(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		printRec(s);
		_putchar('\n');
	}
}
