#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print from number n to 98
 * @n: The start number
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
}
else if (n == 98)
{
printf("%d", n);
}
else if (n > 98)
{
int i;
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
}
printf("\n");
}
