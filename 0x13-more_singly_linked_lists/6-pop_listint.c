#include "lists.h"

/**
 * pop_listint - a funtion tht deletes the head node of a linked list
 * @head: pointer
 * Return: zero(0) if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pops;
	int n;

	if (*head == NULL)
		return (0);
	pops = *head;
	n = (*head)->n;
	pops = (*head)->next;
	free(*head);
	*head = pops;
	return (n);
}
