#include "main.h"

/**
 * print_sign - Analize the sign of a number
 * @n: The number to analize the sign
 *
 * Return: If the number is positive returns 1.
 * If the number is zero returns 0.
 * If the number is negative returns -1.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
