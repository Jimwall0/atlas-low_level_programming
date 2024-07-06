#include "lists.h"
/**
 * add_node_end - adds a node at the end of a list
 * @head: head of the list
 * @str: string to add
 * Return: returns the head of list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *dif = (*head);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = malloc(sizeof(char) * _strlen(str));
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if ((*head) == NULL)
	{
		(*head) = new;
		return ((*head));
	}
	while (dif->next != NULL)
		dif = dif->next;
	dif->next = new;
	return ((*head));
}
