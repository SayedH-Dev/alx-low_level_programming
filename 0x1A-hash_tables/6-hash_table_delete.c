#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode, *temp;

	if (ht == NULL)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			temp = currentNode;
			currentNode = currentNode->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
