#include "main.h"

/**
 * get_bit - desc
 * @n: ...
 * @index: ...
 *
 * Return: void.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}
