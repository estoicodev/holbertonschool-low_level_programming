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
	int size_s1, size_s2, i, j;
	char *p_s1, *p_s2, *new_s;

	if (s1 == NULL)
		p_s1 = "";
	else
		p_s1 = s1;

	if (s2 == NULL)
		p_s2 = "";
	else
		p_s2 = s2;

	for (size_s1 = 0; *(p_s1 + size_s1); size_s1++)
	{}

	for (size_s2 = 0; *(p_s2 + size_s2); size_s2++)
	{}

	new_s = malloc((size_s1 + size_s2) * sizeof(char) + 1);

	if (new_s == NULL)
		return (NULL);

	for (i = 0; i < size_s1; i++)
	{
		*(new_s + i) = *(p_s1 + i);
	}

	for (j = 0; j < size_s2; j++)
	{
		*(new_s + i + j) = *(p_s2 + j);
	}

	*(new_s + i + j) = '\0';

	return (new_s);
}
