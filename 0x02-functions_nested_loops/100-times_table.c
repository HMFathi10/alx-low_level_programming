#include "main.h"

/**
 * times_table_table -  prints the last digit of a number.
 * @n: is an integer
 * Return: the last digit of number.
 */
void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar((i * j) % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
