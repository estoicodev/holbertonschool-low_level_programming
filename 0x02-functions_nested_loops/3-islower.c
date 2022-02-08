#include "main.h"

/**
 * _islower - writes the character c to stdout
 * @c: The character to evaluate if is lower.
 *
 * Return: If is lower returns 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
int i;
for (i = 97; i < 123; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
