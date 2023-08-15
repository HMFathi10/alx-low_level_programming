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
	long int even = 0;

	while (1)
	{
		if (m + n > 4000000)
			break;
		if ((m + n) % 2 == 0)
			even += m + n;
		m += n;
		n = m - n;
	}
	printf("\n");
	return (0);
}
