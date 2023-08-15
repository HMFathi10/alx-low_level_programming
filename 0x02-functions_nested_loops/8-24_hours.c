#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: is an integer.
 * Return: the last digit of number.
 */
int print_last_digit(int n)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
}
