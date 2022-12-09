#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: size of the the array
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **table_array;

	table_array = malloc(sizeof(hash_node_t *) * size);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL || table_array == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = table_array;
	return (new_table);
}
