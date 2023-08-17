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
			_putchar(i + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
