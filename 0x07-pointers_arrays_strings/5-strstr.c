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
	int i, count, len_needle;
	char *p_needle = needle;

	len_needle = 0;
	while (*p_needle)
	{
		p_needle++;
		len_needle++;
	}

	while (*haystack)
	{
		count = 0;
		for (i = 0; *(needle + i); i++)
		{
			if (*(haystack + i) == *(needle + i))
			{
				count++;
				if (count == len_needle)
				{
					return (haystack);
				}
			}
		}
		haystack++;
	}

	return (NULL);
}
