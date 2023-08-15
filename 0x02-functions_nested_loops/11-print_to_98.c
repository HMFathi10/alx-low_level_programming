#include "main.h"

/**
 * add - Add two numbers
 * Return: Number
 */
void print_to_98(int n)
{
	int i;

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
		printf('\n');
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
