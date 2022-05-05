#include "lists.h"

/**
 * free_dlistint - Free dlistint_t list
 * @head: The pointer to the head of the dlist_int_t list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
