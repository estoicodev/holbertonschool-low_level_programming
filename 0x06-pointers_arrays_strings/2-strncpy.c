#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: Copy of the string src
 * @src: string source
 * @n: Number of bytes of src to copy
 * Return: The copy of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src, len_n, i;
	char *p_counter = src;

	len_src = 0;
	while (*p_counter)
	{
		p_counter++;
		len_src++;
	}
	len_n = 0;
	for (i = 1; i <= n; i++)
	{
		if (i <= len_src)
		{
			*dest = *src;
		}
		else
		{
			*dest = '\0';
		}

		src++;
		dest++;
		len_n++;
	}
	while (len_n > 0)
	{
		dest--;
		len_n--;
	}
	return (dest);
}
