#include "main.h"

/**
 * binary_to_uint - desc
 * @b: ...
 *
 * Return: void.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int mul = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len]; len++)
	{}

	len--;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		n += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}

	return (n);
}
