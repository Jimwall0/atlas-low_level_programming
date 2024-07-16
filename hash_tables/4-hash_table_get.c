#include "hash_tables.h"
/**
 * hash_table_get - gets the value at a key
 * @ht: table
 * @key: key to retrieve from
 * Return: the string or NULL on fail
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned char *string = _strdup(key);

	if (ht == NULL)
		return (NULL);
	if (ht->array[hash_djb2(string) % ht->size] != NULL)
		return (ht->array[hash_djb2(string) % ht->size]->value);
	return (NULL);
}
