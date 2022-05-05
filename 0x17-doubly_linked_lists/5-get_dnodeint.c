#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t list
 * @head: Pointer to the head of dlistint_t list
 * @index: Index of the element
 *
 * Return: The n value of the node according to its index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	dlistint_t *tmp = head;

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
