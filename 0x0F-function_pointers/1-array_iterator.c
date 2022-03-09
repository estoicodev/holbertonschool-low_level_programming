#include "function_pointers.h"

/**
 * array_iterator - func
 * @array: ...
 * @size: ...
 * @action: ...
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
