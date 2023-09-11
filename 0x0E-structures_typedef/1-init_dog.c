#include "dog.h"
/**
 * init_dog - Initailize a struct dog.
 * @d: dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
