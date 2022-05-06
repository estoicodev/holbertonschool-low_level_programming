#include "lists.h"

/**
 * create_dnodeint - Create a single node of dlistint_t
 * @n: Integer
 *
 * Return: void
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of a dlistint_t list
 * @idx: Index to add the node
 * @n: Integer (n value)
 *
 * Return: void
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i;

	new = create_dnodeint(n);
	if (new == NULL)
		return (NULL);

	if (!*h)
		return (NULL);

	if (idx == 0)
	{
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	if (tmp->next->next)
	{
		tmp = tmp->next->next;
		tmp->prev = new;
	}

	return (new);
}
