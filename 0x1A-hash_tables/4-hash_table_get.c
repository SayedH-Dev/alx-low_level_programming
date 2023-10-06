#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - function that retrives the value associated with a key
 * @ht: hash table
 * @key: the key to look for
 * Return: value associated with the key or NULL if it was not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currentNode;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	currentNode = ht->array[idx];

	while (currentNode)
	{
		if (strcmp(currentNode->key, key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}
	return (NULL);
}
