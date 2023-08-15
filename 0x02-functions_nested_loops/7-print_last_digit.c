#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: is an integer.
 * Return: the last digit of number.
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n >= 0)
		lastDigit = n % 10;
	else
		lastDigit = (n % 10) * -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
