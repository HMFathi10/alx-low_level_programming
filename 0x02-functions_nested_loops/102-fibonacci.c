#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Computes and prints the sum
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 1;
	long int m = 2;
	int max;

	for (max = 0; max <= 48; max++)
	{
		printf("%ld", m + n);
		m += n;
		n = m - n;
		if (max != 48)
			printf(", ");
	}
	return (0);
}
