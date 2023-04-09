#include "hash_tables.h"
/**
 * shash_table_create - Creates a shash table
 * @size: Size of the array of the table
 *
 * Return: Pointer to the table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

/**
 * shash_table_set - Adds an element to th table
 * @ht: Pointer to the table
 * @key: Key of the new element
 * @value: Value of the new element
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *ptr;

	if (strlen(key) == 0 || key == NULL)
		return (0);
	new = malloc(sizeof(shash_node_t));
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
	index = key_index((const unsigned char *)key, size);
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	new->next = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, new->key) > 0 || strcmp(ptr->key, new->key) == 0)
		{
			new->sprev = ptr->sprev;
			new->snext = ptr;
			ptr->sprev = new;
			break;
		}
		if (ptr->next == NULL)
		{
			new->sprev = ptr->sprev;
			ptr->snext = new;
			break;
		}
		ptr = ptr->next;
	}
	return (1);
}

/**
 * shash_table_get - Gets the value of a key in a shash table
 * @ht: Pointer to the table
 * @key: Key to look for its value
 *
 * Return: The value corresponding to the given key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
}
