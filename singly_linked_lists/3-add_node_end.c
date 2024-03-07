#include "lists.h"
/**
 * add_node_end - Adds a struct to the end of a list
 * @head: list of structs
 * @str: string of characters
 * Return: start of the struct list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head, *temp = *head;
	int number = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (node);
	}
	node->str = malloc(sizeof(char) * _strlen(str) + 1);
	if (node->str == NULL)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	while (str[number] != '\0')
	{
		node->str[number] = str[number];
		number++;
	}
	node->len = number;
	while (node->next != NULL)
	{
		node = node->next;
		temp->next = node;
		temp = temp->next;
	}
	return (*head);
}
