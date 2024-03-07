#include "lists.h"
/**
 * add_node - Adds a new node
 * @head: list of the nodes being added to.
 * @str: what string to add.
 * Return: New node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	unsigned int number = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		printf("Out of storage");
		free(newnode);
		return (NULL);
	}
	newnode->str = malloc(sizeof(char) + strlen(str) + 1);
	if (newnode->str == NULL)
	{
		printf("Can't add a nobody\n");
		free(newnode->str);
		free(newnode);
		return (NULL);
	}
	while (str[number] != '\0')
	{
		newnode->str[number] = str[number];
		number++;
	}
	newnode->len = number;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
