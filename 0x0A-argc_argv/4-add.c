#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of program
 *
 * Description: Printing sentence using the puts function
 * @argc: integer
 * @argv: array of string
 * Return: value is 0
*/

int main(int argc, char *argv[])
{
	int result = 0;
	int num1;

	while (argc-- >= 2)
	{
		sscanf(argv[argc], "%d", &num1);
		if (isdigit(num1))
		{
			printf("Error\n");
			return (1);
		}
		result += num1;
	}
	printf("%d\n", result);
	return (0);
}
