#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers of base 10 starting from 0 using putchar function, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
