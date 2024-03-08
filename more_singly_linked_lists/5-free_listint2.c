#include "lists.h"
/**
 * free_listint2 - frees the whole lists?
 * @head: the start of the list.
*/
void free_listint2(listint_t **head)
{
    listint_t *temp;

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    *head = NULL;
}
