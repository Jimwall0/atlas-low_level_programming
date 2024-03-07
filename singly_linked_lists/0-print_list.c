#include "lists.h"
/*
 * size_t print_list - prints the the nodes in a singly linked list
 * 
 */
size_t print_list(const list_t *h)
{
    size_t number = 0;
    if ((h)->str == NULL)
    {
        printf("[0] (nil)\n");
    }
    else
    {
        printf("%s\n", (h)->str);
    }
    printf("%d\n", h->len);
    while (h->next != NULL)
    {
        number++;
    }
    return (number);
}
