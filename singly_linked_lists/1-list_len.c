#include <stdio.h>
#include "lists.h"
/**
 * print_len - counts all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_len(const list_t *h)
{
    int count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
