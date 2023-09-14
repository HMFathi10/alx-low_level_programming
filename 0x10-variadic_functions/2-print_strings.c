#include "variadic_functions.h"

/**
 * print_strings - Print strings.
 * @n: int
 * @separator: char
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *string;
	unsigned int i = 0;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	if (n)
		for (; i < n; i++)
		{
			string =  va_arg(ap, char *);
			i < n - 1 ? printf("%s%s", string ? string : "(nil)", separator) :  printf("%s\n", string? string : "(nil)");
		}
	va_end(ap);
}
