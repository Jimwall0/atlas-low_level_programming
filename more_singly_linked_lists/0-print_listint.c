#include "lists.h"
/**
 * print_listint - print the elements in the struct
 * @h: struct that needs to be printed
 * Return: the struct again?
*/
size_t print_listint(const listint_t *h)
{
	size_t number = 0;
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	printf("%d\n", h->n);
	number++;
	return (number);
}
