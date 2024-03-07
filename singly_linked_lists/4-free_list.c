#include "lists.c"
/**
 * free_list - frees the structs
 * @head: the start of the list
*/
void free_list(list_t *head)
{
    free(head.str);
    free(head.len);
    free(head);
}