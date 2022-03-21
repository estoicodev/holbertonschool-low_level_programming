#include "lists.h"

/**
 * listint_len - desc
 * @h: ...
 *
 * Return: void
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
