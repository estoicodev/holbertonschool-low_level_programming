#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: Copy from the string source
 * @src: string source
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;
	char *p_counter = src;

	len = 0;
	while (*p_counter)
	{
		len++;
		p_counter++;
	}
	for (i = 0; i <= len; i++)
	{
		*dest = *src;

		src++;
		dest++;
	}
	while (len >= 0)
	{
		dest--;
		len--;
	}
	return (dest);
}
