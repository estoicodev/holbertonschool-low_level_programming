#include "main.h"

/**
 * _strchr - desc
 * @s: desc
 * @c: desc
 *
 * Return: desc
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}

	return (s);
}
