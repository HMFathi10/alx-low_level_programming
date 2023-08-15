#include "main.h"

/**
 * [O
 * _islower - checks for lowercase character.
 * @c: is ASCII for char
 * Return: 0 if upper and 1 if lower
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
