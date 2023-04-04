#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: pointer
 * Return: NO
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
