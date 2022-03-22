#include "lists.h"

/**
 * get_nodeint_at_index - desc
 * @head: ...
 * @index: ...
 *
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}

	if (len < index)
		return (NULL);

	tmp = head;

	for (i = 0; i < index; i++)
		tmp = tmp->next;

	return (tmp);
}
