#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table array
 * Return: pointer to the created hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hs_table;

	if (size == 0)
		return (NULL);

	hs_table = malloc(sizeof(hash_table_t));
	if (hs_table == NULL)
		return (NULL);

	hs_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hs_table->array == NULL)
	{
		free(hs_table);
		return (NULL);
	}
	hs_table->size = size;
	for (i = 0 ; i < size ; i++)
		hs_table->array[i] = NULL;
	return (hs_table);
}
