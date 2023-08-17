#include "main.h"

/**
 * more_numbers - prints number from 0 to 9.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(i / 10 + 48);
			}
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
