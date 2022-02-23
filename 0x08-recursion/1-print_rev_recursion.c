#include "main.h"

/**
 * _print_rev_recursion - desc
 * @s: desc
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}

	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_putchar(*s);
	}
}
