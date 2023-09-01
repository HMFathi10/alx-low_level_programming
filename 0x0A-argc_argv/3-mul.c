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

	if (argc > 1)
	{
		result = (int)argv[1] * (int)argv[2];
		printf("%s\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
