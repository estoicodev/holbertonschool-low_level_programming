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
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}