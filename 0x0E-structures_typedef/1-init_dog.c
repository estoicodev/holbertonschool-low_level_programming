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
	if (name == NULL || age <= 0 || owner == NULL)
		exit(1);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
