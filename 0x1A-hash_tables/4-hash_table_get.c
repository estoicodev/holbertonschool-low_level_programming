#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table
 * @key: value of the key
 * Return: value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_item;
	unsigned long int index;

	if (!ht || !*key || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		return (NULL);
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		else
		{
			while (current_item != NULL)
			{
				if (strcmp(current_item->key, key) == 0)
					break;
				current_item = current_item->next;
			}
		}
	}

	return (current_item->value);
}
