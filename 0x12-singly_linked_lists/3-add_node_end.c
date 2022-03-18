#include "lists.h"

/**
 * add_node_end - desc
 * @head: ...
 * @str: ...
 *
 * Return: void
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	unsigned int i;

	if (current == NULL)
	{
		current = malloc(sizeof(list_t));
		if (current == NULL)
			return (NULL);

		current->str = strdup(str);

		for (i = 0; *(str + i); i++)
		{}
		current->len = i;
		current->next = NULL;
		*head = current;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = malloc(sizeof(list_t));
		if (current->next == NULL)
			return (NULL);
		current->next->str = strdup(str);
		for (i = 0; *(str + i); i++)
		{}
		current->next->len = i;
		current->next->next = NULL;
	}

	return (current);
}
