#include "main.h"

/**
 * flip_bits - desc
 * @n: ...
 * @m: ...
 *
 * Return: void.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_xor_m, count = 0;

	n_xor_m = n ^ m;

	while (n_xor_m >= 1)
	{
		count += (n_xor_m & 1);

		n_xor_m = n_xor_m >> 1;
	}

	return (count);
}
