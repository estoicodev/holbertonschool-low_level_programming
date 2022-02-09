#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The limit of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
if (n >= 0 && n < 15)
{
int multiplicando;
int multiplicador;
for (multiplicando = 0; multiplicando < n + 1; multiplicando++)
{
for (multiplicador = 0; multiplicador < n + 1; multiplicador++)
{
int res;
res = multiplicando * multiplicador;
if (res < 10)
{
if (multiplicador != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(res + '0');
}
else if (res >= 10 && res < 100)
{
if (multiplicador != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res >= 100 && res < 1000)
{
if (multiplicador != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((res / 100) + '0');
_putchar(((res / 10) % 10) + '0');
_putchar((res % 10) + '0');
}
}
_putchar('\n');
}
}
}
