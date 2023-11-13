#include <stdio.h>
/**
 * add - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int div(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}
return (a / b);
}

/**
 * mod - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (0);
}
return (a % b);
}
