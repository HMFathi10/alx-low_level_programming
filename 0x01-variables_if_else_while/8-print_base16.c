#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 55; i++)
{
putchar(i + '0');
if (i == 9)
{
i = 48;
}
}
putchar('\n');
return (0);
}
