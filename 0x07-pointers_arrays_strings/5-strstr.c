#include "main.h"

/**
 * _strstr - desc
 * @haystack: desc
 * @needle: desc
 *
 * Return: desc
 */
char *_strstr(char *haystack, char *needle)
{
	int i, count;

	i = 0;
	while (haystack[i])
	{
		count = 0;

		while (needle[count])
		{
			if (needle[count] != haystack[i + count])
			{
				break;
			}
			count++;
		}
		if (needle[count] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}

	return (NULL);
}
