#include "lists.h"

/**
 * sum_dlistint - a function that adds all data of a linked list, returns sum
 * @head: head node
 * Return: sum of all data, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
