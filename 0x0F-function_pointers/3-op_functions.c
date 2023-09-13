#include "3-calc.h"

/**
 * op_add - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
return (a / b);
}

/**
 * op_mod - Print name.
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
return (a % b);
}
