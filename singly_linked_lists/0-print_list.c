#include "lists.h"
/**
 * print_list - prints all the element in a list
 * @h: the head of list
 * Return: the number of elements in the list
*/
size_t print_list(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		h = h->next;
	}
	return (number);
}
