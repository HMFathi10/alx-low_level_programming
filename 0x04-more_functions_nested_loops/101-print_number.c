#include "main.h"

/**
 * print_number - print number
 *@n: is an integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i = 10;
	int len;
	int neg = 0;

	while (1)
	{
		if (n < 0)
		{
			neg = 1;
			n *= -1;
		}
		len = n / i;
		if (len < 10)
			break;
		i *= 10;
	}

	while (i >= 10)
	{
		if (neg == 1)
		{
			_putchar('-');
			neg = 0;
		}
		_putchar((n % i) / (i / 10) + 48);
		n %= i;
		i /= 10;
	}
}
