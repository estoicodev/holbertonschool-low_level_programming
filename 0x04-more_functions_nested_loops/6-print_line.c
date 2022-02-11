#include "main.h"

/**
 * print_line - prints 10 times the numbers, from 0 to 14
 * @n: The number of times the character '_' should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
