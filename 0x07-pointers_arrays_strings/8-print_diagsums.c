#include "main.h"

/**
 * *print_diagsums - sum.
 * @a: Square D array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	printf("%d, ", sum);
	sum = 0;
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a -= size;
	}
	printf("%d\n", sum);
}
