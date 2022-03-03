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
	int j, i, len;
	int *ptr;

	if (min > max)
		exit(1);

	len = 0;

	for (j = min; j <= max; j++)
		len++;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	j = min;

	for (i = 0; i < len; i++)
	{
		*(ptr + i) = j;
		j++;
	}

	return (ptr);
}
