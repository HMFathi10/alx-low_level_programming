#include "variadic_functions.h"

/**
 * print_all - Print All.
 * @format: char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char * str;

	va_start(ap, format);
	while (format && *(format + i))
	{
		switch (format[i])
		{
			case 'c':
				if (i != 0)
					printf(", ");
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				!str? printf("(nil)") : printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end (ap);
}
