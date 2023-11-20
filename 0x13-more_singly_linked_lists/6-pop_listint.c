#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pops the head node from a listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: The data value of the popped head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (!*head)
        return (0);
    temp = *head;
    n = temp->n;
    *head = temp->next;
    free(temp);
    return (n);
}
