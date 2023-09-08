#include "hash_tables.h"

/**
 * key_index - Get the index in which the key/value
 *      pair should be stored in an array of a simple hash table.
 * @key: The key to the index of.
 * @size: The size of an array of a hash table.
 *
 * Return: The key's index.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
