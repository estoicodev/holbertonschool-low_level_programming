#include "lists.h"

/**
 * add_node - desc
 * @head: ...
 * @str: ...
 *
 * Return: void
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; *(str + i); i++)
	{}

	new->len = i;

	new->next = *head;

	*head = new;

	return (new);
}
