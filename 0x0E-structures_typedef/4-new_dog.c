#include "dog.h"
/**
 * *new_dog - Define a struct dog.
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, nameLen = 0, ownerLen = 0;

	d = malloc(sizeof(*d));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	for (nameLen = 0; name[nameLen]; nameLen++)
		;
	for (ownerLen = 0; owner[ownerLen]; ownerLen++)
		;
	d->name = malloc(nameLen + 1);
	d->owner = malloc(ownerLen + 1);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i < nameLen; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	d->age = age;
	for (i = 0; i < ownerLen; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	return (d);
}
