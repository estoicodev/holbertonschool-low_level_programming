#include "main.h"

/**
 * _memset - desc
 * @s: desc
 * @b: desc
 * @n: desc
 *
 * Return: desc
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s);
}