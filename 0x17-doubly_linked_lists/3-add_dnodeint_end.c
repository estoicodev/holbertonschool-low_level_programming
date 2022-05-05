#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the final of a dlistint_t list.
 *
 * @head: A pointer to the head of the dlist_t list.
 * @n: Integer for the n value.
 *
 * Return: The address of then new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		*head = new;
	}

	return (new);
}
