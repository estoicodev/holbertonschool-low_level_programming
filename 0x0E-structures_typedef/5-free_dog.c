#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - desc
 * @d: ...
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
