#include "lists.h"

/**
 * sum_listint - desc
 * @head: ...
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (!head)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
