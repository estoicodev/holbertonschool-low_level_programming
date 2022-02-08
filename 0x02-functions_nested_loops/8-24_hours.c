#include "main.h"

/**
 * jack_bauer - Print the time of a complete day
 * Return: void.
 */
void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;
for (h1 = 0; h1 < 10; h1++)
{
for (h2 = 0; h2 < 10; h2++)
{
if (h1 == 2 && h2 == 4)
{
break;
}
for (m1 = 0; m1 < 10; m1++)
{
if (m1 == 6)
{
break;
}
for (m2 = 0; m2 < 10; m2++)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
if (h1 == 2)
{
break;
}
}
}
