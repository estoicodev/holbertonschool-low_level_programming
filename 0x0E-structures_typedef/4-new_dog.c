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
	dog_t new;
	dog_t *ptr;

	new.name = name;
	new.age = age;
	new.owner = owner;

	ptr = malloc(sizeof(char *) + sizeof(char *) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	ptr = &new;

	return (ptr);
}
