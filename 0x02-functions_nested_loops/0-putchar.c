#include <main.h>
/**
 * main - Entry point
 *
 * Description: This program prints _putchar.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
		_putchar(str[n]);
	_putchar('\n');
	return (0);
}

