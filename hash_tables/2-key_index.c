#include "hash_tables.h"
/**
 * key_index - grabs the key index
 * @key: the string
 * @size: the limit
 * Return: the id of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int number = 0;

	for (; number < size; number++)
	{
		if (number == (hash_djb2(key) % size))
			break;
	}
	return (number);
}
