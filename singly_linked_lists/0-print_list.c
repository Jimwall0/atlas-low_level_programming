#include "main.h"
/*
 * size_t print_list - prints the the nodes in a singly linked list
 * 
 */
size_t print_list(const list_t *h)
{
    int number = 0;
    char string;
    unsigned int length = 0;
    list_s *temp = h;

    while (temp != NULL)
    {
        string = *h.str;
        length = *h.len;
        if (string != '\0')
        {
            printf("%s\n", string);
        }
        else
        {
            printf("[0] (nil)");
        }

    }
}
