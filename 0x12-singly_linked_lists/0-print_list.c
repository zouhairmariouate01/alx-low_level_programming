#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 *
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count;

    count = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%zu] (nil)\n", count);
        else
            printf("[%zu] %s\n", count, h->str);
        h = h->next;
        count++;
    }
    return (count);
}
