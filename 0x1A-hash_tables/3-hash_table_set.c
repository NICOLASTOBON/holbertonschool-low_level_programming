#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: is a key
 * @value: is a value
 * Return: 1 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new;
	unsigned long int idx;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (0);
	}
	if (current != NULL)
	{
		while (current != NULL)
		{
			if (strcmp(key, current->key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
		}
		current = current->next;
	}

	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
