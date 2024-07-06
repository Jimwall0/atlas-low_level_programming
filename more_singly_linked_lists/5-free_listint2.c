#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to null
 * @head: start of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
	{
		printf("Freed !\n");
		exit(1);
	}
	while (*head != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
}
