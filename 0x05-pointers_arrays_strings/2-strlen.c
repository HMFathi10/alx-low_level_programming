#include "main.h"

/**
 * _strlen - Change value of integer.
 * @s: is a string
 * Return: Void
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}