#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: the array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
