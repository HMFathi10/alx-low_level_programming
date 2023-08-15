#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: is an integer.
 * Return: the abs of number.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
