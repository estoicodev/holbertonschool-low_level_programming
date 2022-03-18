#include "lists.h"

/**
 * free_list - desc
 * @head: ...
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}
