#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Returns: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next;

    while (*head != NULL)
    {
        next = (*head)->next; /* Save the next node */
        (*head)->next = prev; /* Reverse the pointer */
        prev = *head;         /* Move the prev pointer to the current node */
        *head = next;         /* Move the head pointer to the next node */
    }

    *head = prev; /* Update the head to the last node (which is now the first) */
    return *head;
}
