#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
/*	int i, j;*/
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t*) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
/*	for (i = 0; i < (int)size; i++)
	{
		table->array[i] = malloc(sizeof(hash_node_t));
		if ((table->array)[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free ((table->array)[j]);
			free(table->array);
			free(table);
		}
	}*/
	return (table);
}
