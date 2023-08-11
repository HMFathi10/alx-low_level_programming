#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        for (int n = 0; n < 10; n++)
        {
                for (int i = n+1; i < 10; i++)
                {
                        putchar(n + '0');
                        putchar(i + '0');
                        putchar(',');
                        putchar(' ');
                }
        
        }
        putchar('\n');
        return (0);
}

