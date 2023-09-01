#include "main.h"

/**
 * _isdigit - checks for digit.
 * @c: is integer
 * Return: 1 if  and 0 if lower
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
