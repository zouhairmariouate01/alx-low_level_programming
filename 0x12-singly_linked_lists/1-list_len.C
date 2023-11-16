#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 *
 * @h: head of the linked list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
    const list_t *temp;
    size_t n;

    temp = h;
    n = 0;
    while (temp)
    {
        temp = temp->next;
        n++;
    }

    return (n);
}
