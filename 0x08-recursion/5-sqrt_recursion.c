#include "main.h"

/**
 * find_sqrt - Helper function to Find the natural square root with recursion
 * @n: Number
 * @r: Root
 *
 * Return: square root of n
 */
int find_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);

	if (r >= n / 2)
		return (-1);

	return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root with recursion
 * @n: Number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (n);

	root = 0;

	return (find_sqrt(n, root + 1));
}
