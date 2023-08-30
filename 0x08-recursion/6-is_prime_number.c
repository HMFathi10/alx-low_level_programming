#include "main.h"

/**
 * calc - Return the power.
 * @n: number
 * @number: is the number
 * Return: int
 */
int calc(int n, int number)
{
	if (number <= 1 || (number % n == 0  && n > 1))
		return (0);
	if (n <= 1)
		return (1);
	return (calc(n - 1, number));
}

/**
 * is_prime_number - check if prime or not
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	return calc(n / 2, n);
}
