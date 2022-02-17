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
	char *p_count = src;

	while (*dest)
	{
		dest++;
	}

	len = 0;
	while (*p_count)
	{
		len++;
		p_count++;
	}
	for (i = 0; *(src + i); i++)
	{
		*dest = *(src + i);
		dest++;
		len++;
	}
	*dest = '\0';
	dest++;
	*dest = '\0';
	dest--;

	len--;
	while (len > 0)
	{
		dest--;
		len--;
	}
	return (dest);
}
