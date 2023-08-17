#include "main.h"

/**
 * print_line - prints "_".
 * @n: is integer
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0 ; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
