#include "lists.h"
/**
 * add_node - adds a new node to a list
 * @head: beginning of the list
 * @str: string to copy
 * Return: the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = malloc(sizeof(char) * _strlen(str));
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (*head != NULL)
		new_node->next = *head;
	(*head) = new_node;
	return (*head);
}
