#include "3-calc.h"

/**
 * op_add - func
 * @a: ...
 * @b: ...
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - func
 * @a: ...
 * @b: ...
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func
 * @a: ...
 * @b: ...
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - func
 * @a: ...
 * @b: ...
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 * op_mod - func
 * @a: ...
 * @b: ...
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a % b);
}
