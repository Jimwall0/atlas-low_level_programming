#include "lists.h"
/**
 * free_listint2 - frees the whole lists?
 * @head: the start of the list.
*/
void free_listint2(listint_t **head)
{
    if (head == NULL)
    {}
    else
    {
	while ((*head)->next != NULL)
    {
        free(*head);
        (*head) = (*head)->next;
    }
    free(*head);
    }
    *head = NULL;
}
