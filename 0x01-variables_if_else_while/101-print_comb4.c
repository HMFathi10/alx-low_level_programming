#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of three digits.
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
for (i = n + 1; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(n + '0');
putchar(i + '0');
putchar(j + '0');
if (n != 8 || i != 9 || j != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

