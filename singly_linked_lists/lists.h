#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct list_s - A node to hold some data
 * @str: a string
 * @len: how many characters are in the string
 * @next: the next node in the list
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int main(void);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *string);
list_t *add_node_end(list_t **head, const char *str);

#endif
