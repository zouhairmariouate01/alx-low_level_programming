#include "hash_tables.h"

/**
 * key_index - Determine the index for storing a key/value.
 *       pair within a hash table array.
 * @key: The key for which the index is computed
 * @size: The size of the hash table array.
 *
 * Return: The index of the key.
 * Description: Employs the djb2 algorithm to calculate the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
