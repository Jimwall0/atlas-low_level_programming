#include "lists.h"
/**
 * pop_listint - removes a struct from the front
 * @head: list of structs
 * Return: true or false?
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return ((*head)->n);
}
