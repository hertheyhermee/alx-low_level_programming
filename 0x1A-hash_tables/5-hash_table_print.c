#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
