#include "main.h"

/**
 * print_number - Print an integer
 * @n: Number
 *
 * Return: void
 */
void print_number(int n)
{
	int tmp = n;

	if (tmp < 0)
	{
		_putchar('-');
		tmp = tmp * -1;
	}

	if ((tmp / 10) != 0)
		print_number(tmp / 10);

	_putchar((tmp % 10) + '0');
}
