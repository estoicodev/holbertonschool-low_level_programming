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

	for (len_needle = 0; *(needle + len_needle); len_needle++)
	{
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
					if (*(haystack + i + 1) == 32 || *(haystack + i + 1) == '\0')
					{
						return (haystack);
					}
				}
			}
		}
		haystack++;
	}

	return (NULL);
}
