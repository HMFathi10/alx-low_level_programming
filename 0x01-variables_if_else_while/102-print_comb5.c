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
for (j = 0; j < 10; j++)
{
putchar(n + '0');
putchar(i + '0');
putchar(j + '0');
if (n != 9 || i != 9 || j != 9)
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

