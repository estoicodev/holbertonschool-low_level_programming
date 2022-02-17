#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: First string
 * @src: Second string
 * Return: String after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (*dest)
	{
		len++;
		dest++;
	}

	for (i = 0; *(src + i); i++)
	{
		*dest = *(src + i);
		dest++;
		len++;
	}
	*dest = '\0';
	dest--;
	dest--;

	len--;
	len--;
	while (len > 0)
	{
		dest--;
		len--;
	}
	return (dest);
}
