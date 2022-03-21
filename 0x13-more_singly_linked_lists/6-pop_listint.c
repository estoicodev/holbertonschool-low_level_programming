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
	int tmp = old_head->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;

	free(old_head);

	return (tmp);
}
