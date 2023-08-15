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
	unsigned int long n = 0;
	unsigned int long m = 1;
	int max;

	for (max = 0; max <= 95; max++)
	{
		printf("%lu", m + n);
		m += n;
		n = m - n;
		if (max != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
