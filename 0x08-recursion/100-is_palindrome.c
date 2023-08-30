#include "main.h"

/**
 * _strlen_recursion - Return length.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}

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
	int size = _strlen_recursion(s);
	int i = 0;

	return (check(s, i, size - 1));
}
