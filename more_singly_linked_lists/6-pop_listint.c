#include "lists.h"
/**
 * pop_listint - prints and remove the head of a list
 * @head: the start of a list
 * Return: the int data of the node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head);
	int number = 0;

	if (head == NULL)
		exit(1);
	(*head) = (*head)->next;
	number = temp->n;
	free(temp);
	return (number);
}
