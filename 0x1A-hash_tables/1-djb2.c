#include "hash_tables.h"

/**
 * hash_djb2 - Computes the hash using the djb2 algorithm.
 * @str: The input string to be hashed.
 *
 * Return:  The resulting hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
