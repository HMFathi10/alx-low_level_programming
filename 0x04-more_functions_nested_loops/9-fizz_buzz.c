#include "main.h"
/**
 * main - Entry point
 *
 * Description: Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (i % 3  == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
