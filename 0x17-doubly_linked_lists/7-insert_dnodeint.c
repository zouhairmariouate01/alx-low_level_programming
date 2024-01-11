#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starts at 0)
 * @n: Value to be added to the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *prev, *next, *node;

	if (!h)
		return (NULL);

	prev = *h;
	next = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		*h = node;
		node->next = next;
		if (next)
			next->prev = node;
		node->prev = NULL;
		return (node);
	}
	if (next)
		next = next->next;
	else
		return (NULL);
	for (i = 1; next != NULL && i < idx; i++)
	{
		prev = prev->next;
		next = next->next;
	}
	if (i == idx)
	{
		prev->next = node;
		node->prev = prev;
		node->next = next;
		if (next)
			next->prev = node;
		return (node);
	}
	return (NULL);
}
