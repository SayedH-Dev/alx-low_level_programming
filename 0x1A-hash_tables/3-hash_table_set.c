#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - a function that add elment to the hash table
 * @ht: hash tabel
 * @key: the element key
 * @value: value of the key
 * Return: 1 if success or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *currentNode;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[idx];
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			if (currentNode->value == NULL)
				return (0);
			return (1);
		}
		currentNode = currentNode->next;
	}

	newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode->value);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return(1);
}
