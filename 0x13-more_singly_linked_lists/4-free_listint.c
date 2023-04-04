#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: pointer to head node
 * Return: NO
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;
		current = current->next;
		free (temp);
	}
}
