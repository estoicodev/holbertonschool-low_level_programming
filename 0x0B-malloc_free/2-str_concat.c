#include "main.h"

/**
 * str_concat - desc
 * @s1: desc
 * @s2: desc
 *
 * Return: String.
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, size_s;
	int i, j;
	char *p_s1 = s1;
	char *p_s2 = s2;
	char *new_s;

	size_s1 = 0;
	while (*(p_s1 + size_s1))
	{
		size_s1++;
	}

	size_s2 = 0;
	while (*(p_s2 + size_s2))
	{
		size_s2++;
	}

	size_s = size_s1 + size_s2;
	new_s = (char *) malloc(size_s * sizeof(char) + 1);

	i = 0;
	while (i < size_s1)
	{
		*(new_s + i) = *(p_s1 + i);
		i++;
	}

	j = 0;
	while (j < size_s2)
	{
		*(new_s + i + j) = *(p_s2 + j);
		j++;
	}

	*(new_s + i + j) = '\0';

	return (new_s);
}
