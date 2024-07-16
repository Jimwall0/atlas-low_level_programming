#include "hash_tables.h"
/**
 * hash_table_get - gets the value at a key
 * @ht: table
 * @key: key to retrieve from
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int number = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	for(; number < ht->size; number++)
	{
		if (strcmp(key, ht->array[number]->key) == 0)
			return (ht->array[number]->value);
	}
	return (NULL);
}
