#include "lists.h"

/**
 * free_listint - desc
 * @head: ...
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
