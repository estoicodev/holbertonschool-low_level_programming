#include "lists.h"

/**
 * create_nodeint - desc
 * @n: ...
 *
 * Return: void
 */
listint_t *create_nodeint(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * count_listint - desc
 * @head: ...
 *
 * Return: integer
 */
unsigned int count_listint(listint_t *head)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}

/**
 * go_to_final_node - desc
 * @head: ...
 *
 * Return: void
 */
listint_t *go_to_final_node(listint_t *head)
{
	while (head->next)
		head = head->next;

	return (head);
}

/**
 * insert_nodeint_at_index - desc
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: void
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len = count_listint(*head);
	listint_t *before, *current, *tmp = *head;
	listint_t *new = create_nodeint(n);

	if (new == NULL || len < idx)
		return (NULL);

	if (!*head && idx == 0)
		*head = new;

	if (idx == len)
	{
		before = go_to_final_node(*head);
		before->next = new;
	}

	for (i = 0; i < len; i++)
	{
		if (idx != 0 && i == idx - 1)
			before = tmp;

		if (i == idx)
		{
			new->next = tmp;
			current = tmp;
			tmp = new;

			if (idx != 0)
				before->next = tmp;
			else
				*head = tmp;
		}

		if (i > idx)
			tmp = current;

		tmp = tmp->next;
	}

	return (new);
}
