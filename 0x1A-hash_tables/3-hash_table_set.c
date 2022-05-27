#include "hash_tables.h"

/**
 * create_hash_node -  create a hash node
 * @key: key pair
 * @value: value of the key
 * Return: hash node,
 * Otherwise, NULL
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (!item)
		return (NULL);
	item->key = malloc(strlen(key) + 1);
	if (!(item->key))
	{
		free(item);
		return (NULL);
	}
	item->value = malloc(strlen(value) + 1);
	if (!(item->value))
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	item->next = NULL;

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * free_hash_node -  free a hash node
 * @hash_node: Hash node
 * Return: void
 */
void free_hash_node(hash_node_t *hash_node)
{
	free(hash_node->key);
	free(hash_node->value);
	free(hash_node);
}

/**
 * hash_table_set -  adds an element to the hash table
 * @ht: hash table
 * @key: key pair
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item;
	char *value_cpy;
	unsigned long int index;

	if (!ht || !*key || !key || !value)
		return (0);

	value_cpy = strdup(value);
	if (!value_cpy)
		return (0);

	item = create_hash_node(key, value);
	if (!item)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
		ht->array[index] = item;
	else
	{
		while (current_item != NULL)
		{
			if (strcmp(current_item->key, key) == 0)
			{
				free_hash_node(item);
				free(current_item->value);
				current_item->value = value_cpy;
				return (1);
			}
			current_item = current_item->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
