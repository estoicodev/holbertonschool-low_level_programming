#include "lists.h"

/**
 * add_nodeint_end - desc
 * @head: ...
 * @n: ...
 *
 * Return: void
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;

	if (current == NULL)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);

		current->n = n;

		current->next = NULL;
		*head = current;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = malloc(sizeof(listint_t));
		if (current->next == NULL)
			return (NULL);
		current->next->n = n;
		current->next->next = NULL;
	}

	return (current);
}
