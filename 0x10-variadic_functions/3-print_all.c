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
	int flag = 0, j;
	char symbol[] = "cifs";
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (symbol[j])
		{
			if (format[i] == symbol[j] && flag++)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
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
				!str ? printf("(nil)") : printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
