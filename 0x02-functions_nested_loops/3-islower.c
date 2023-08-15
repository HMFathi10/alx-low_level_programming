#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c - is ASCII for char
 * Return: 0 if upper and 1 if lower
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);
	else
		return (0);
}
