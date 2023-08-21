#include "main.h"

/**
 * swap_int - Change value of integer.
 * @a: is an integer
 * @b: is and integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}
