#include "main.h"

/**
 * reverse_array - reverse an array.
 * @a: is an array
 * @n: is the size of and array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		a[start] = a[start] + a[end];
		a[end] = a[start] - a[end];
		a[start] = a[start] - a[end];
		start++;
		end--;
	}
}
