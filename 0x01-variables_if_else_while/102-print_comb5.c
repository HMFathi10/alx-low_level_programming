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
int k;

for (n = 0; n < 10; n++)
{
for (i = 0; i < 10; i++)
{
for (j = n; j < 10; j++)
{
for (k = i + 1; k < 10; k++)
{
if ( k == i && j == n)
{
  continue;
}
putchar(n + '0');
putchar(i + '0');
putchar(' ');
putchar(j + '0');
putchar(k + '0');

if (n != 9 || i != 8 || j != 9 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

