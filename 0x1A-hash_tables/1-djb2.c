#include "hash_tables.h"
/**
 * hash_djb2 - Gives the index of a key
 * @str: Pointer to the string of the key
 * Return: An index for the key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
