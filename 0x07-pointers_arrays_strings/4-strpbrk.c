#include "main.h"

/**
 * _strpbrk - desc
 * @s: desc
 * @accept: desc
 * Return: desc
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
