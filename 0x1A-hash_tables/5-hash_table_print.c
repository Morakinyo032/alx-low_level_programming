#include "hash_tables.h"
/**
 * key_len - Finds the number of keys in a hash table
 * @ht: Pointer to the table
 *
 * Return: Number of keys
 */
int key_len(const hash_table_t *ht)
{
	int i, j;
	hash_node_t *ptr;

	j = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			j++;
			ptr = ptr->next;
		}
	}
	return (j);
}

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int i, j, len;

	if (ht == NULL)
		return;
	j = 0;
	len = key_len(ht);
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		printf("\'%s\' : \'%s\'", ht->array[i]->key, ht->array[i]->value);
		j++;
		if (j < len)
			printf(", ");
		else
			break;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		ptr = ht->array[i]->next;
		while (ptr != NULL)
		{	
			printf("\'%s\' : \'%s\'", ptr->key, ptr->value);
			j++;
			ptr = ptr->next;
		}
		if (j < len)
			printf(",");
		else
			break;
	}
	printf("}\n");
}
