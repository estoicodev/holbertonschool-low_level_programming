#include "main.h"

/**
 * array_range - desc
 * @min: desc
 * @max: desc
 *
 * Return: Integer pointer.
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);

	for (len = min; len <= max; len++)
	{}

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	i = 0;

	for (len = min; len <= max; len++)
	{
		*(ptr + i) = len;
		i++;
	}

	return (ptr);
}
