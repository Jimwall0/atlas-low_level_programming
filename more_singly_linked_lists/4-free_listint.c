#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the start of a list
*/
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
