#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to head node
 * @n: integer
 * Return: address of new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	node = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
