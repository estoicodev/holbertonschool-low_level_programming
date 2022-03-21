#include "lists.h"

/**
 * free_listint2 - desc
 * @head: ...
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (*head)
	{
		*head = (*head)->next;
		free(current);
		current = *head;
	}
}
