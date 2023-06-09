#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next, *ptr;
	unsigned long int x;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->sxze; x++)
	{
		ptr = ht->array[x];
		while (ptr)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = next;
		}
	}
	free(ht->array);
	free(ht);
}
