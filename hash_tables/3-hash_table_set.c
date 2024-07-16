#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a table
 * @ht: the table
 * @key: the id
 * @value: the number of the id
 * Return: 1 on success an 0 on fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	long unsigned int index = 0;
	const unsigned char *string = _strdup(key);

	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	index = hash_djb2(string) % ht->size;
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

/**
 * _strdup - copies a char to unsigned char
 * @string: copy
 * Return: the string
*/
unsigned char *_strdup(const char *string)
{
	int number = 0;
	unsigned char *letter = NULL;

	letter = malloc(sizeof(char) * 124);
	while (string[number] != '\0')
	{
		letter[number] = string[number];
		number++;
	}
	return (letter);
}
