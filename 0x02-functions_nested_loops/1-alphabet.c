#include "main.h"

/**
 * print_alphabet - writes the alphabet to stdout
 * Return: 0 (Success).
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
return;
}
