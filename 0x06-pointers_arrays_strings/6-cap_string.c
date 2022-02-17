#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @c: String
 * Return: String capitalized
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; *(c + i); i++)
	{
		if ((*(c + i) >= 97 && *(c + i) <= 122))
		{
			if (*(c + i - 1) < 65 || *(c + i - 1) > 90)
			{
				if (*(c + i - 1) < 97 || *(c + i - 1) > 122)
				{
					*(c + i) = *(c + i) - 32;
				}
			}
		}
	}

	return (c);
}
