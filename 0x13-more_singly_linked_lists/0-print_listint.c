#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: pointer to the head mode
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
