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
	struct dog n_dog;
	dog_t *ptr_dog;

	n_dog.name = name;
	n_dog.age = age;
	n_dog.owner = owner;

	ptr_dog = malloc(sizeof(struct dog));

	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog = &n_dog;

	return (ptr_dog);
}
