#include "main.h"

/**
 * rev_string - Prints a string, in reverse
 * @s: String
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, n;
	char *p_counter = s;
	char temp;

	len = 0;
	while (*p_counter)
	{
		len++;
		p_counter++;
	}
	p_counter--;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = 0; i < n; i++)
		{
			temp = *s;
			*s = *p_counter;
			*(s + len - 1) = temp;
			s++;
			p_counter--;
			len -= 2;
		}
	}
	else
	{
		n = len / 2;
		for (i = 0; i < n; i++)
		{
			temp = *s;
			*s = *p_counter;
			*(s + len - 1) = temp;
			s++;
			p_counter--;
			len -= 2;
		}
	}
}
