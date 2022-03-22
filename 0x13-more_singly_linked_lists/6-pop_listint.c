#include "lists.h"

/**
 * pop_listint - desc
 * @head: ...
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *old_head;
	int n;

	if (*head == NULL)
		return (0);

	old_head = *head;

	n = (*head)->n;

	*head = (*head)->next;

	free(old_head);

	return (n);
}
