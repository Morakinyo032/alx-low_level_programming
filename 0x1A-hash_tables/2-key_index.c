#include "hash_tables.h"
/**
 * key_index - Gives the index of a key
 * @key: Pointer to the key
 * @size: size of the array of the hash table
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int dividend;
	unsigned long int rate;

	dividend = hash_djb2(key);
	rate = dividend / size;
	
}
