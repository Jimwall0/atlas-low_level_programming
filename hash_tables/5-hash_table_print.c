#include "hash_tables.h"
/**
 * hash_table_print - prints all the elements in the table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int number = 0, count = 0, number2 = 0;
	hash_node_t *temp = NULL;

	printf("{");
	for (; number < ht->size; number++)
	{
		if (ht->array[number] != NULL)
		{
			temp = ht->array[number];
			while (temp != NULL)
			{
				temp = temp->next;
				count++;
			}
		}
	}
	for (number = 0; number < ht->size; number++)
	{
		if (ht->array[number] != NULL)
		{
			temp = ht->array[number];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (number2 < count - 1)
					printf(", ");
				number2++;
			}
		}
	}
	printf("}\n");
}
