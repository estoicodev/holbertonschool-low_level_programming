#include "lists.h"

/**
 * delete_nodeint_at_index - desc
 * @head: ...
 * @index: ...
 *
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *before;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	tmp = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (tmp == NULL)
			return (-1);

		tmp = tmp->next;
	}

	before = tmp->next->next;
	free(tmp->next);
	tmp->next = before;

	return (1);
}
