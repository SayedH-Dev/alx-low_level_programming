#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	int printed;
	unsigned long int i;
	hash_node_t *currentNode;

	printed = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0 ; i < ht->size ; i++)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", currentNode->key, currentNode->value);
			currentNode = currentNode->next;
			printed = 1;
		}
	}
	printf("}\n");
}
