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
	long int n = 0;
	int i = 1;

	while (1)
	{
		if (i * 5 >= 1024)
			break;
		n += (i * 5);
		i++;
	}
	i = 1;
	while (1)
	{
		if (i * 3 >= 1024)
			break;
		if (((i * 3) % 5) != 0)
			n += (i * 3);
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
