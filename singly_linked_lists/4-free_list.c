#include "lists.h"
/**
 * free_list - frees the structs
 * @head: the start of the list
*/
void free_list(list_t *head)
{
    while (head->next != NULL)
    {
        free(head->str);
        free(head);
    }
    free(head->str);
    free(head);
}