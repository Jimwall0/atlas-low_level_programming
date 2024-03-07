#include "lists.h"
/**
 * add_node_end - Adds a struct to the end of a list
 * @head: list of structs
 * @str: string of characters
 * Return: start of the struct list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL, *temp = *head;
	int number = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (node);
	}
	while (str[number] != '\0')
	{
		number++;
	}
	node->str = malloc(sizeof(char) * number + 1);
	if (node->str == NULL)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	number = 0;
	while (str[number] != '\0')
	{
		node->str[number] = str[number];
		number++;
	}
	node->len = number;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (*head);
}
