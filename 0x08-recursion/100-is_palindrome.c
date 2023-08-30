#include "main.h"

/**
 * check - Return the power.
 * @i: number
 * @size: number
 * @s: string
 * Return: int
 */
int check(char *s, int i, int size)
{
	if (i >= size)
		return (1);
	if (s[i] != s[size])
		return (0);
	return (check(s, ++i, --size));
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int size = -1;
	int i = 0;

	while (s[++size] != '\0');
	return (check(s, i, size - 1));
}
