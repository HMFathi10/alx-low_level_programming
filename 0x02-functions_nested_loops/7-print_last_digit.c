#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: is an integer.
 * Return: the last digit of number.
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return n % 10;
}
