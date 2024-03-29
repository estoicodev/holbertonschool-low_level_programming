#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: First string
 * @src: Second string
 * Return: String after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (*dest)
	{
		dest++;
		len++;
	}

	for (i = 0; *(src + i); i++)
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
