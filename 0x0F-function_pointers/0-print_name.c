#include "function_pointers.h"

/**
 * print_name - Print name.
 * @name: char
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
