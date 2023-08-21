#include "main.h"

/**
 * puts2 - Reverse.
 * @str: is a string
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != 0)
		i++;
	while (j <= (i - 1))
	{
		_putchar(str[j]);
		j += 2;
	}
}
