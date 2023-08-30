#include "main.h"

/**
 * calc - Return the power.
 * @n: number
 * @base: number
 * Return: int
 */
int calc(int n)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (calc(n + 1 , base));
}

/**
 * _sqrt_recursion - return the sqrt
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	calc(1, n);
}
