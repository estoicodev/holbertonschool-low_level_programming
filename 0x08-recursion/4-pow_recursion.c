#include "main.h"

/**
 * _pow_recursion - desc
 * @x: desc
 * @y: desc
 *
 * Return: desc
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
