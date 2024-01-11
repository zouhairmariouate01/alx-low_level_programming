#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *ptr;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;
	node->prev = ptr;

	return (node);
}
