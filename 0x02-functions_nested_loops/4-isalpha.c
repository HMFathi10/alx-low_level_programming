#include "main.h"

/**
 * _isalpha - checks for alphabet of character.
 * @c: is ASCII for char
 * Return: 0 if alpha and 1 if not alpha
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
