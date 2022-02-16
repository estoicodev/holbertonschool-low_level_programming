#include "main.h"

/**
 *  _strncat - concatenates two strings with n bytes of src.
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes concatenated of src
 * Return: The string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len_src, i;
	char *p_src = src;

	len = 0;
	while (*dest)
	{
		dest++;
		len++;
	}
	for (len_src = 0; *(src + len_src); len_src++)
	{
	}
	if (n > len_src)
	{
		n = len_src;
	}
	for (i = 0; i < n; i++)
	{
		*dest = *p_src;
		dest++;
		p_src++;
		len++;
	}
	len--;
	while (len > 0)
	{
		dest--;
		len--;
	}
	dest--;
	return (dest);
}
