#include "lists.h"

/**
 * free_dlistint -  function that frees a list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
