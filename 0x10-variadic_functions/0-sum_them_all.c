#include "variadic_functions.h"

/**
 * sum_them_all - desc
 * @n: ...
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(op, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);

	va_end(op);

	return (sum);
}
