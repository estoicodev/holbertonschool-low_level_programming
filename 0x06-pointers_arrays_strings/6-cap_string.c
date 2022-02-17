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
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			if (*(c + i - 1) == 9 || *(c + i - 1) == 10)
			{
				*(c + i) = *(c + i) - 32;
			}
			else if (*(c + i - 1) == 32 || *(c + i - 1) == 46)
			{
				*(c + i) = *(c + i) - 32;
			}
		}
	}

	return (c);
}
