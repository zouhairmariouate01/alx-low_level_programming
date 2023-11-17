#include "lists.h"

/**
 * list_len - function that counts the number of elements in a list_t list
 * @h: pointer to the list_t structure to count
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
