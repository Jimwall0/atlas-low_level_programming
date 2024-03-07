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
    while (node->next)
    {
        string = node->str;
        if (string == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("%s\n", string);
        }
        printf("%d\n", number);
        numb++;
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
