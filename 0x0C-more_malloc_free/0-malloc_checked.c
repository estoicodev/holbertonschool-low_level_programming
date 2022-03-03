#include "main.h"

/**
 * malloc_checked - desc
 * @b: desc
 *
 * Return: void pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
