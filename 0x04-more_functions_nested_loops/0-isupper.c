#include "main.h"

/**
 * _islower - Checks for uppercase character
 * @c: The character to evaluate if is upper.
 *
 * Return: If is lower returns 1.
 * Otherwise, 0 is returned.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
