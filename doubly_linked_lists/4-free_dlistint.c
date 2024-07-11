#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: start of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
