#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: Number
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
