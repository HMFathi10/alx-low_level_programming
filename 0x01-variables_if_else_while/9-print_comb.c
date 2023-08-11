#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of single-digit numbers. 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int n = 0; n < 10; n++)
	{
		putchar(n+'0');
		putchar(',');
		putchar(' ');
	}
	putchar("\n");
	return (0);
}