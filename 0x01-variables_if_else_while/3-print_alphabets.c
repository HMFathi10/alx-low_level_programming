#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (char c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}