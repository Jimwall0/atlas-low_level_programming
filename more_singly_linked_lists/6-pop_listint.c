#include "lists.h"
/**
 * pop_listint - removes a struct from the front
 * @head: list of structs
 * Return: true or false?
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number = 0;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	number = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (number);
}
