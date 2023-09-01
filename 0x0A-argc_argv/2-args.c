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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
