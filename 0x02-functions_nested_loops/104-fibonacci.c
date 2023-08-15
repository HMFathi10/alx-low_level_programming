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
	long unsigned int n = 0;
	long unsigned int m = 1;
	int max;

	for (max = 0; max <= 98; max++)
	{
		printf("%lu", m + n);
		m += n;
		n = m - n;
		if (max != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
