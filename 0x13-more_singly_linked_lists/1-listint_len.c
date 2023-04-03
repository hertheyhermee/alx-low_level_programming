#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linkedlist
 * @h: pointer to the head node
 * Return: the number of elements
 */
size_t listint_len(const list_int *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
