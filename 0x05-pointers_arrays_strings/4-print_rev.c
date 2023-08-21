#include "main.h"

/**
 * print_rev - Print string.
 * @s: is a string
 * Return: Void
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
		return;
	printRec(s);
	_putchar('\n');
}
