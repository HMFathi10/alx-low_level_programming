#include "variadic_functions.h"

/**
 * sum_them_all - SUM.
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i = 0;

	va_start(ap, n);
	if (n)
		for (; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
