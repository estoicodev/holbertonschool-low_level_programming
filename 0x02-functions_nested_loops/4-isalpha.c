#include "main.h"

/**
 * _isalpha - Analize if the character c is alpha
 * @c: The character to analize
 *
 * Return: If is alpha returns 1.
 * Otherwise, 0 is returned.
 */
int _isalpha(int c)
{
int i;
for (i = 65; i < 123; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
