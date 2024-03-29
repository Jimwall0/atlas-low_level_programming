#include "lists.h"
/**
 * print_list - prints the the nodes in a singly linked list
 * @h: list provided to print
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t numb = 0;
	char *string;
	unsigned int number = 0;
	const list_t *node = h;

	if (node == NULL)
		return (numb);
	while (node->next != NULL)
	{
		string = node->str;
		number = node->len;
		if (string == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", number, string);
		}
		node = node->next;
		numb++;
	}
	string = node->str;
	number = node->len;
	if (string == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", number, string);
	}
	numb++;
	return (numb);
}
