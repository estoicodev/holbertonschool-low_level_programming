#include "main.h"

/**
 * set_bit - desc
 * @n: ...
 * @index: ...
 *
 * Return: void.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n ^ (1 << index));

	return (1);
}
