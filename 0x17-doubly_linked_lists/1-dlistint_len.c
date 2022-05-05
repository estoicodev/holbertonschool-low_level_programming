#include "lists.h"

/**
 * dlistint_len - Return lenght of the dlistint_t list.
 *
 * @h: A pointer to the head of the dlist_t list.
 *
 * Return: The number of nodes in the dlist_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
