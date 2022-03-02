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

	s_array = malloc(size * sizeof(char));

	if (size == 0 || s_array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s_array + i) = c;
		i++;
	}

	return (s_array);
}
