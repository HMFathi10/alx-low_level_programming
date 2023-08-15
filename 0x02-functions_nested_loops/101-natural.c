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

	while (i < 1024)
	{
		n += (i * 5);
		i++;
	}
	i = 1;
	while (i < 1024)
	{
		if (((i *3) % 5) != 0)
			n += (i * 3);
		i++;
	}
	printf("%d", n);
	return (0);
}
