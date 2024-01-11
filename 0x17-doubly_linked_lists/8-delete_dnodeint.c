#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted (starts at 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev = NULL, *next = NULL, *cur = *head;

	if (!head)
		return (-1);
	while (cur)
	{
		if (index == i)
			break;
		cur = cur->next;
		i++;
	}
	if (!cur)
		return (-1);
	next = cur->next;
	prev = cur->prev;
	if (next)
		next->prev = prev;
	if (prev)
		prev->next = next;
	else
	{
		*head = next;
	}
	free(cur);

	return (1);
}
