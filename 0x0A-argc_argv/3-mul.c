#include "main.h"

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
	int num2;

	if (argc > 1)
	{
		sscanf(argv[1], "%d", &num1);
		sscanf(argv[2], "%d", &num2);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
