#include "main.h"

/**
 * _atoi - Reverse.
 * @s: is the integer
 * Return: char
 */
int _atoi(char *s)
{
	int n = 0;
	int neg = 1;

	do {
		if (*s == '-')
			neg *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - 48);
		else if (n > 0)
			break;
	} while (*s++);
	return (n * neg);
}
