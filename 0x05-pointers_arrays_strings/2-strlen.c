#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
