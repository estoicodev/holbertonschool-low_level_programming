#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - desc
 * @d: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL || owner != NULL || d != NULL)
	{
		d->name = malloc(sizeof(name));
		d->name = name;

		d->age = age;

		d->owner = malloc(sizeof(owner));
		d->owner = owner;
	}
}
