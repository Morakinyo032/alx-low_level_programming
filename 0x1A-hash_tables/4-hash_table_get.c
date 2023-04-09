#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Pointer to the table
 * @key: The key to retrieves its value
 *
 * Return: Return the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (strlen(key) == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);

}
