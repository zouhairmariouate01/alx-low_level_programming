#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev, *current;

	if (!head)
		return;

	current = head;
	while (current->next)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
	free(current);
}
