#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at n
 * @head: list of structs
 * @idx: the index of the list
 * @n: integer data type
 * Return: head node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *temp;
	unsigned int loop = 0;

	/*checks the head if it exists*/
	if (head == NULL)
		return (NULL);
	/*makes a new node*/
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	/*adds node to front*/
	if (*head == NULL || idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	/*checks for index and prevents going outside list*/
	temp = *head;
	for (loop = 0; loop < idx - 1 && temp->next != NULL; loop++)
	{
		temp = temp->next;
	}
	if (temp->next == NULL && loop != idx - 1)
	{
		free(node);
		return (NULL);
	}
	node->next = temp->next;
	temp->next = node;
	return (*head);
}
