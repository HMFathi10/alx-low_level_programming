#include "main.h"

/**
 * print_triangle - prints "#".
 * @size: is integer
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0 ; j < size; j++)
			{
				if (size - j - 1 > i)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
