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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

		i++;
	}

	return (NULL);
}
