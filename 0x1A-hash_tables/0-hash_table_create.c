#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: the array's size
 *
 * Return: error case - NULL
 * 	otherwise - pointer to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(hash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(hash_node_t *) * size);
	if (sht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	return (sht);
}
