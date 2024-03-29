#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: address of the new node, NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *latest;
	listint_t *a;

	a = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && a != NULL; j++)
			a = a->next;
	}

	if (a == NULL && idx != 0)
		return (NULL);

	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);

	latest->n = n;

	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
	}
	else
	{
		latest->next = a->next;
		a->next = latest;
	}
	return (latest);
}
