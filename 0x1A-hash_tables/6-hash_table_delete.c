#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *ptr1;
	int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			ptr1 = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = ptr1;
		}
	}
	free(ht->array);
	free(ht);
}
