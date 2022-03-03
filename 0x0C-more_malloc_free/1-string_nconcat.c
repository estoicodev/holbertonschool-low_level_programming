#include "main.h"

/**
 * string_nconcat - desc
 * @s1: desc
 * @s2: desc
 * @n: desc
 *
 * Return: char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; *(s1 + len_s1); len_s1++)
	{}

	for (len_s2 = 0; *(s2 + len_s2); len_s2++)
	{}

	if (n > len_s2)
		n = len_s2;

	ptr = malloc((len_s1 + n) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		*(ptr + i) = *(s1 + i);

	for (j = 0; j < n; j++)
		*(ptr + i + j) = *(s2 + j);

	*(ptr + i + j) = '\0';

	return (ptr);
}
