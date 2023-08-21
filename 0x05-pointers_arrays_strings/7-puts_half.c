#include "main.h"

/**
 * puts_half - Reverse.
 * @str: is a string
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 0;
	int size = 0;
	while (s[i] != 0)
		i++;
	size = i / 2;
	while (size < i)
	{
		_putchar(str[size++]);
	}
	_putchar('\n');
}
