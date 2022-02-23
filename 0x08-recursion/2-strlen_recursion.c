#include "main.h"

/**
 * _strlen_recursion - calculate the lenght of the string with recursion
 * @s: string
 *
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}

	return (0);
}
