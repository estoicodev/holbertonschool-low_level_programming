#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: If both strings are equal returns 0.
 * If the matching character of left string has greater ASCII value than the
 * character of the right string returns a value greater than zero.
 * If the matching character of left string has lesser ASCII value than the
 * character of the right string returns a value less than zero.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int len_s1;
	char *p_s1 = s1;

	len_s1 = 0;
	while (*p_s1)
	{
		p_s1++;
		len_s1++;
	}
	for (i = 0; i < len_s1; i++)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
			{
				return (*s1 - *s2);
			}
			else if (*s2 > *s1)
			{
				return (*s1 - *s2);
			}
		}
		s1++;
		s2++;
	}
	return (0);
}
