#include "hash_tables.h"
/**
 * hash_table_print - prints all the elements in the table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int number = 0;

	printf("{");
	for(; number < ht->size; number++)
	{
		if (ht->array[number] != NULL)
		{
			printf("'%s': '%s', ", ht->array[number]->key, ht->array[number]->value);
		}
	}
	printf("}\n");
}
