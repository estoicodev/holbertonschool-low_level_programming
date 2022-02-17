#include "main.h"

/**
 *  _strncat - concatenates two strings with n bytes of src.
 * @dest: First string
 * @src: Second string (concatenate to dest)
 * @n: Number of bytes concatenated of src
 * Return: The string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;

	while (*dest)
	{
		dest++;
		len++;
	}

	for (i = 0; i < n; i++)
	{
		*dest = *(src + i);
		dest++;
		len++;
	}

	*dest = '\0';

	while (len > 0)
	{
		dest--;
		len--;
	}

	return (dest);
}
