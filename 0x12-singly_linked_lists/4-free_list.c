#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: double pointer to the list_t structure to free
 */
void free_list(list_t **head)
{
    list_t *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp->str);
        free(temp);
    }
}
