#include "main.h"

/**
 * _strspn - desc
 * @s: desc
 * @accept: desc
 *
 * Return: desc
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;

	count = 0;
	while (*s && *s != 32)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*s == *(accept + i))
			{
				count++;
				break;
			}
		}
		s++;
	}

	return (count);
}
