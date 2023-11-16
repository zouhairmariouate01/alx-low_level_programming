#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 *
 * @h: pointer to head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    const list_t *current;
    size_t n;

    n = 0;
    current = h;
    while (current != NULL)
    {
        printf("[%lu] %s\n", current->len, current->str ? current->str : "(nil)");
        current = current->next;
        n++;
    }
    return (n);
}
