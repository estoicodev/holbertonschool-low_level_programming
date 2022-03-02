#include "main.h"

/**
 * _strdup - desc
 * @str: desc
 *
 * Return: Pointer to the string duplicated
 */
char *_strdup(char *str)
{
	int size, i;
	char *s_array;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
	{
		size++;
	}

	s_array = malloc((size * sizeof(char)) + 1);

	if (s_array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(s_array + i) = *(str + i);
		i++;
	}
	*(s_array + i) = '\0';

	return (s_array);
}
