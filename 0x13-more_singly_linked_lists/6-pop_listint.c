#include "lists.h"

/**
 * pop_listint - desc
 * @head: ...
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head = *head;
	int n;

	if (head == NULL)
		return (0);

	n = old_head->n;

	*head = (*head)->next;

	free(old_head);

	return (n);
}
