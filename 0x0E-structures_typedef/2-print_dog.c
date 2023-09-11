#include "dog.h"
/**
 * print_dog - Print a struct dog.
 * @d: dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
	}
}
