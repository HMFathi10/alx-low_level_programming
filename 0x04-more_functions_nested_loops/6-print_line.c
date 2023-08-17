#include "main.h"

/**
 * print_line - prints "_".
 *
 * Return: void
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
