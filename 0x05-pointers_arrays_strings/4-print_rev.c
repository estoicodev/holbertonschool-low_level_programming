#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
