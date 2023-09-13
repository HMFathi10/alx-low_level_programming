#include "main.h"

/**
 * print_name - Print name.
 * @name: char
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
