#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the table
 * @key: Pointer to the key
 * @value: Pointer to the value
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (strlen(key) == 0 || key == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
