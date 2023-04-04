#include "lists.h"

/**
 * pop_listint - a funtion tht deletes the head node of a linked list
 * @head: pointer
 * Return: zero(0) if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (0);
}
