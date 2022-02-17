#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 * Return: string with all lowercase letters into uppercase letters
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; *(c + i); i++)
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			*(c + i) = *(c + i) - 32;
		}
	}

	return (c);
}
