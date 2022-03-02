#include "main.h"

/**
 * create_array - desc
 * @size: desc
 * @c: desc
 *
 * Return: String.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s_array;

	if (size == 0)
		return (NULL);

	s_array = malloc(size * sizeof(char) + 1);

	i = 0;
	while (i < size)
	{
		*(s_array + i) = c;
		i++;
	}
	*(s_array + i) = '\0';

	return (s_array);
}
