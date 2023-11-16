#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 *
 * @head: a pointer to the pointer to the first element of the list
 * @str: the string to store in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);
    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}
