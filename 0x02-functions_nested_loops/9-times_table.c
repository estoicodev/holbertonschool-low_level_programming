#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
int multiplicando;
int multiplicador;
for (multiplicando = 0; multiplicando < 10; multiplicando++)
{
for (multiplicador = 0; multiplicador < 10; multiplicador++)
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
}
_putchar(res + '0');
}
else
{
if (multiplicador != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
}
_putchar('\n');
}
}
