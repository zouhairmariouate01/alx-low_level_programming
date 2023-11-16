#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a linked list
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    const list_t *temp;
    size_t n;

    temp = h;
    n = 0;
    while (temp)
    {
        if (temp->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%lu] %s\n", temp->len, temp->str);
        temp = temp->next;
        n++;
    }

    return (n);
}
