#include "lists.h"
/**
 * free_list - frees a list
 * @head: the head of a list
*/
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL);
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
