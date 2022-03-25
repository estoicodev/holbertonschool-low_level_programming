#include "main.h"

/**
 * clear_bit - desc
 * @n: ...
 * @index: ...
 *
 * Return: void.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
