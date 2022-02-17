#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: String encoded
 */
char *leet(char *c)
{
	int i, j;
	int lt_mayus[] = {65, 69, 79, 84, 76};
	int lt_minus[] = {97, 101, 111, 116, 108};
	int numbers_encode[] = {52, 51, 48, 55, 49};

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(c + i) == lt_mayus[j] || *(c + i) == lt_minus[j])
			{
				*(c + i) = numbers_encode[j];
			}
		}
	}

	return (c);
}
