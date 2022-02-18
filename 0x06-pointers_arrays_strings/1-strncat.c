#include "main.h"

/**
 *  _strncat - concatenates two strings with n bytes of src.
 * @dest: First string
 * @src: Second string (concatenate to dest)
 * @n: Number of bytes concatenated of src
 * Return: The string concatenated
 */
char *_strncat (char *dest, char *src, int n)
{
	int i, j, l;

	for (i = 0; *(dest + i); i++)
	{}

	for (j = 0; *(src + j); j++)
	{}

	if (j < n)
	{
		n = j;
	}

	for (l = 0; l < n; l++)
	{
		*(dest + i + l) = *(src + l);
	}

	*(dest + i + l) = '\n';

	return (dest);
}
