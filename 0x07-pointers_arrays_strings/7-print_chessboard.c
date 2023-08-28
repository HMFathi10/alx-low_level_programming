#include "main.h"

/**
 * *print_chessboard - print chessboard.
 * @a: Two D array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		if (i == 0 || i == 1 || i == 6 || i == 7)
			for (j = 0; j <= 7; j++)
				printf("%c", a[i][j]);
		printf("\n");
	}
}
