#include "main.h"

/**
 * main - generate password
 * Return: Always (0)
 */
int main(void)
{
	int num;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
