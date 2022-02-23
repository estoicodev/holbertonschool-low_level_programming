#include "main.h"

/**
 * _print_rev_recursion - desc
 * @s: desc
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *p_s = s;

	if (*p_s != '\0')
	{
		_print_rev_recursion(p_s + 1);
	}

	_putchar(*(p_s - 1));
}
