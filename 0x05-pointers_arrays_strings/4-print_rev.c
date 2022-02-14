#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
		s++;
		len++;
	}

	while (len >= 0)
	{
		_putchar(*s);
		if (len == 0)
		{
			break;
		}
		s--;
		len--;
	}
	_putchar('\n');
}
