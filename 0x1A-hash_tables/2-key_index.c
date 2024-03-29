#include "hash_tables.h"
/**
 * key_index - Gives the index of a key
 * @key: The key to find index for
 * @size: Size of the array of the hash table
 *
 * Return: Returns the index at which the key/value pair would be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
