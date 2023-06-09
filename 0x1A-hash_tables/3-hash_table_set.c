#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table
 * @key: key of the new element
 * @value: value of the new element
 * Return: 1 success, 0 failure
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newHash_node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	newHash_node = malloc(sizeof(*newHash_node));
	if (!newHash_node)
		return (0);

	newHash_node->key = strdup(key);
	newHash_node->value = strdup(value);

	newHash_node->next = ht->array[index];
	ht->array[index] = newHash_node;

	return (1);
}
