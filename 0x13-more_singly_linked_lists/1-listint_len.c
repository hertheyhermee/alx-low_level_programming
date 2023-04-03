#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linkedlist
 * @h: pointer to the head node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
