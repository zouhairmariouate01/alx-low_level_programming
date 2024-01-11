#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the list
 * Return: The sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
