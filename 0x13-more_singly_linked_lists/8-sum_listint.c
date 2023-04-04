#include "lists.h"

/**
 * sum_listint - a function that sum all of the data(n) of a linked list
 * @head: pointer
 * Return: zero if list is empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
