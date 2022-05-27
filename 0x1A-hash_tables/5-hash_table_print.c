#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *current;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			current = ht->array[i];

			while (current != NULL)
			{
				printf("'%s': '%s'", current->key,
				       current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	putchar('}');
	putchar('\n');
}
