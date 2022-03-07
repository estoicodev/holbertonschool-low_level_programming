#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - desc
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: new type struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *cp_name, *cp_owner;

	n_dog = malloc(sizeof(struct dog));

	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	if (n_dog->name == NULL || n_dog->age < 0 || n_dog->owner == NULL)
		return (NULL);

	cp_name = malloc(sizeof(n_dog->name));

	if (cp_name == NULL)
		return (NULL);

	cp_owner = malloc(sizeof(n_dog->owner));

	if (cp_owner == NULL)
		return (NULL);

	return (n_dog);
}
