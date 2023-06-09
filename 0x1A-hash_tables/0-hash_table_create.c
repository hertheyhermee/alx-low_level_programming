#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of array
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;

	if (size == 0)
		return (NULL);
	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);
	newTable->array = calloc(size, sizeof(hash_node_t *));
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}
	newTable->size = size;
	return (newTable);
}
