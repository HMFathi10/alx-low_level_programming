#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n+'0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
