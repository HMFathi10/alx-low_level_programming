#include "main.h"

/**
 * print_to_98 - Add two numbers
 * Return: Void
 */
void print_to_98(int n)
{
	if (n >98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
