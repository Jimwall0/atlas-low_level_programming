#include "lists.h"
/**
 * print_listint - print the elements in the struct
 * @h: struct that needs to be printed
 * Return: the struct again?
*/
size_t print_listint(const listint_t *h)
{
	printf("%d\n", h->n);
	return (h);
}
