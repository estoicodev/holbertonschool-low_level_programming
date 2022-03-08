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
	dog_t *dog;
	int i;
	int len_name = 0, len_owner = 0;

	for (i = 0; name[i]; i++)
		len_name++;

	for (i = 0; owner[i]; i++)
		len_owner++;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc((len_name + 1) * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((len_owner + 1) * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < len_owner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
