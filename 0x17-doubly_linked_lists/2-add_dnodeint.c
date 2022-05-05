#include "lists.h"

/**
 * add_dnodeint - Add a new node to the dlistint_t list
 * @head: Pointer to the head element of the list
 * @n: Integer for the n value
 *
 * Return: Pointer to the head of the dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
