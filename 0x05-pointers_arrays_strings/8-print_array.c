#include "main.h"

/**
 * print_array - Reverse.
 * @a: is a array
 * @n: is the size
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n--)
	{
		printf("%d", a[i++]);
		if (!n)
			printf(", ");
	}
	_putchar('\n');
}
