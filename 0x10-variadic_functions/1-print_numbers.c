#include "variadic_functions.h"

/**
 * print_numbers - Print the numbers.
 * @n: int
 * @separator: char
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	if (n)
		for (; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
