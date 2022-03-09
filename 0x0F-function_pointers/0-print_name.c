#include "function_pointers.h"

/**
 * print_name - func
 * @name: ...
 * @f: ...
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
