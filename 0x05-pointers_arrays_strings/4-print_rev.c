#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 * @s: String
 *
 * Return: void
 */
void print_rev(char *s)
{
	int counter;
	int i;
	char *p_count = s;

	counter = 0;
	while (*p_count)
	{
		counter++;
		p_count++;
	}
	p_count--;

	for (i = counter; i > 0; i--)
	{
		_putchar(*p_count);
		p_count--;
	}
	_putchar('\n');
}
