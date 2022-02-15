#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, half, n, last_n_characters;
	int i;
	char *p_counter = str;
	char *p_half = str;

	len = 0;
	while (*p_counter)
	{
		len++;
		p_counter++;
	}
	half = len / 2;
	n = (len - 1) / 2;
	last_n_characters = len - n;
	if (len % 2 == 0)
	{
		for (i = half; i < len; i++)
		{
			_putchar(*(p_half + i));
		}
	}
	else
	{
		for (i = last_n_characters ; i < len; i++)
		{
			_putchar(*(p_half + i));
		}
	}
	_putchar('\n');
}
