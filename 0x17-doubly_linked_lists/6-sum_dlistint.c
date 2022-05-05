#include "lists.h"

/**
 * sum_dlistint - Sum of all (n) data of a dlistint_t list
 * @head: Pointer to the head of a dlistint_t list
 *
 * Return: Sum of all (n) data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}

	return (sum);
}
