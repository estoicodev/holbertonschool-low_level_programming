#include "main.h"

/**
 * print_number - Print an integer
 * @n: Number
 *
 * Return: void
 */
void print_number(int n)
{
	int tmp = n, dig;

	if (tmp < 0)
	{
		tmp = tmp * -1;
		_putchar('-');
	}

	if ((tmp / 10) != 0)
		print_number(tmp / 10);

	_putchar((tmp % 10) + '0');
}
