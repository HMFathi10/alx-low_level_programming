#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase expect 'q' and 'e', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		if ( c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
