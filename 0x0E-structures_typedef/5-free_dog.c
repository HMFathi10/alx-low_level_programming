#include "dog.h"
/**
 * free_dog - Define a struct dog.
 * @d: dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
