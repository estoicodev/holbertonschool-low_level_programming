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
	char *s_array;

	if (size == 0)
		return (NULL);

	s_array = (char *)malloc(size * sizeof(char));

	*s_array = c;

	return (s_array);
}
