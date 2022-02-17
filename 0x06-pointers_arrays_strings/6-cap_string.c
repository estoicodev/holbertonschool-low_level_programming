#include "main.h"
/**
 * name - desc
 * @a: desc
 * Return: desc
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; *(c + i); i++)
	{
		if ((*(c + i) >= 97 && *(c + i) <= 122))
		{
			if (*(c + i - 1) < 65)
			{
				*(c + i) = *(c + i) - 32;
			}
		}
	}

	return (c);
}
