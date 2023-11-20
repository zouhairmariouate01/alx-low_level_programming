#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number specifier of elements listint_t list.
 * @h: the pointer to the head specifier of the list.
 *
 * Return: the number specifier of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        h = h->next;
        node_count++;
    }

    return node_count;
}
