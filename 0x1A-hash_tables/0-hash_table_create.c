#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * ht->size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
