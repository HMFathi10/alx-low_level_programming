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
	int cents, mincoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		mincoins += 1;
	}
	printf("%d\n", mincoins);
	return (0);
}
