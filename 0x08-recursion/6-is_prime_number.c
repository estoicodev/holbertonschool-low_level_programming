#include "main.h"

/**
 * find_prime - Helper function to analize if a number is prime
 * @n: Number
 * @i: Increment
 *
 * Return: Is is prime 1
 * Otherwise, 0
 */
int find_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i >= n / 2)
		return (1);

	return (find_prime(n, i + 1));
}

/**
 * is_prime_number - Analize if a number is prime or not
 * @n: Number
 *
 * Return: Is is prime 1
 * Otherwise, 0
 */
int is_prime_number(int n)
{
	int y;

	if (n == 1 || n < 0)
		return (0);

	y = 1;

	return (find_prime(n, y + 1));
}
