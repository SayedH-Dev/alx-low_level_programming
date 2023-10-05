#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - function that calculates the index of a key in a hash table
 * @key: the key to calculate the index for
 * @size: size of hash table array
 * Return: the index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh_value;

	hsh_value = hash_djb2(key);
	return (hsh_value % size);
}
