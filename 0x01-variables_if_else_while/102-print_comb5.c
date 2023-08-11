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
int n;
int i;
int j;

for (n = 0; n < 10; n++)
{
for (i = 0; i < 10; i++)
{
putchar(n + '0');
putchar(i + '0');
if (n != 9 || i != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

