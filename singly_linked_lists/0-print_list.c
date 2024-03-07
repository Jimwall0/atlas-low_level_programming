#include "lists.h"
/*
 * size_t print_list - prints the the nodes in a singly linked list
 * 
 */
size_t print_list(const list_t *h)
{
    size_t numb = 0;
    char *string;
    unsigned int number = 0;
    const list_t *node = h;
    while (node->next != NULL)
    {
        string = node->str;
        number = node->len;
        if (string == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", number, string);
        }
        if (node->next == NULL)
        {
            return (numb);
        }
        else
        {
            node = node->next;
        }
    }
return (numb);
}
