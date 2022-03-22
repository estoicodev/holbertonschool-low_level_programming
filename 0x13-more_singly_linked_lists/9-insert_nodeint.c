#include "lists.h"

/**
 * insert_nodeint_at_index - desc
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = create_nodeint(n);
	listint_t *tmp = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
