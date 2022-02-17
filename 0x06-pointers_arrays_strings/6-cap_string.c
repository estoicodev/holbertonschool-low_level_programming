#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @c: String
 * Return: String capitalized
 */
char *cap_string(char *c)
{
	int i, j;
	int *ascii = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125}:

		for (i = 0; *(c + i); i++)
		{
			if (*(c + i) >= 97 && *(c + i) <= 122)
			{
				for (j = 0; j < 13; j++)
				{
					if (*(c + i - 1) == *ascii)
					{
						*(c + i) = *(c + i) - 32;
					}
					ascii++;
				}
			}
		}

	return (c);
}
