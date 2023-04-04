#include "lists.h"

/**
 * pop_listint - a funtion tht deletes the head node of a linked list and
 * returns the head node's data(n)
 * @n: head node data
 * @head: pointer
 * Return: zero(0) if linked list is empty
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp = *head;
	int n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (0);
}
