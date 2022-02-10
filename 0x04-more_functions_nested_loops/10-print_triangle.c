#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int h;
for (i = 0; i < size; i++)
{
for (j = i; j < size - 1; j++)
{
_putchar(' ');
}
for (h = i; h >= 0; h--)
{
_putchar('#');
}
_putchar('\n');
}
}
