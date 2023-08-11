#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercaseu reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        for (char c = 'z'; c >= 'a'; c--)
                putchar(c);
        putchar('\n');
        return (0);
}
