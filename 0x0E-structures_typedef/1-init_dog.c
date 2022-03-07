#include <stdio.h>
#include "dog.h"

/**
 * init_dog - desc
 * @dog: ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
