#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	while (*s - 2)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
