#include "main.h"

/**
 * _isdigit -  checks for digit character.
 * @c: The character to evaluate if is a digit.
 *
 * Return: On success 1.
 * Otherwise, 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
