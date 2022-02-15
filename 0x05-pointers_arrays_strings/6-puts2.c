#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 * @str: The string
 *
 * Return: void
 */
void puts2(char *str)
{
	int c;

	c = 1;
	while (*str != '\0')
	{
		if (c % 2 != 0)
		{
			_putchar(*str);
		}
		str++;
		c++;
	}
	_putchar('\n');
}
